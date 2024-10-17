#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>

class DocumentManager{
private:
///need member variable to store the document Id(int) + document name(string) + license limit(string)
std::unordered_map<int, std::pair<std::string , int>> docMap;
///member variable to store patron ids and borrowed books names
std::unordered_map<int, std::string> patronMap;
///member variable to search books easily
std::unordered_map<int, std::string> docMapSearch;



public:
void addPatron(int patronID);

int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

void returnDocument(int docid, int patronID);


};


#endif