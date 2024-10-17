#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    docMap.insert(std::make_pair(id,std::make_pair(name,license_limit)));  ///inserting object with id, name and license limit to docmap
    docMapSearch.insert(std::make_pair(id, name)); ///inserting object with an id and name in docmapsearch
};

void addPatron(int patronID);

int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

void returnDocument(int docid, int patronID);