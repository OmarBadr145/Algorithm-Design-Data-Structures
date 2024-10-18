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
    auto foundDoc = docMapSearch.find(name);
    if (foundDoc != docMapSearch.end())
    {
        return foundDoc->second; // returns value cause key is firstherefore second is value smile facey yippy
    }
    else
    {
        return 0;
    }
};

bool DocumentManager::borrowDocument(int docid, int patronID); // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
void DocumentManager::returnDocument(int docid, int patronID);