#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit)
{
    docMap.insert(std::make_pair(id, std::make_pair(name, license_limit))); /// inserting object with id, name and license limit to docmap
    docMapSearch.insert(std::make_pair(name, id));                          /// inserting object with an id and name in docmapsearch
};

void DocumentManager::addPatron(int patronID)
{
    patronMap.insert(std::make_pair(patronID, std::vector<std::string>{})); /// inserting object with patron id and a vector of strings
};

int DocumentManager::search(std::string name)
{ /// returns docid if name is in the document collection or 0 if the name is not in the collection
    /// docMapSearch[name]; ///condom off <NEED PULL OUT>
    auto docFind = docMapSearch.find(name);
    if (docFind != docMapSearch.end())
    {
        return docFind->second; // returns value cause key is firstherefore second is value smile facey yippy
    }
    else
    {
        return 0;
    }
};

bool DocumentManager::borrowDocument(int docid, int patronID)
{                                               // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    auto docFind = docMap.find(docid);          /// finding document based on its id
    auto patronFind = patronMap.find(patronID); /// fiding patron based on their id
    if (docFind != docMap.end() && docFind->second.second > 0 && patronFind != patronMap.end())    ///check if both the document and patron exists
    {                                                                                           /// as well as the document having availabl licenses
        docFind->second.second--;   ///reduce available copies, decrement license limit
        patronFind->second.push_back(docFind->second.first);  ///adding doc to patron
        return true;  
    }
    else
    {
        return false;
    }
};
void DocumentManager::returnDocument(int docid, int patronID) {
    auto docFind = docMap.find(docid);          /// finding document based on its id
    auto patronFind = patronMap.find(patronID); /// fiding patron based on their id

    if(docFind != docMap.end() && patronFind != patronMap.end()){
        auto& patronDocs = patronFind->second;   ///name of patron
        auto docName = docFind->second.first;

        auto findingDoc = std::find(patronDocs.begin(), patronDocs.end(), docName);   //finding doc in patrons list of borrowed
        if(findingDoc != patronDocs.end()){    
            patronDocs.erase(findingDoc);
            docFind->second.second++;   ///incrementing licenses 
        }
    }


};