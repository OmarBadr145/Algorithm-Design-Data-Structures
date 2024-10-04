#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <iostream>
#include <string>
#include <vector>
#include "TrieNode.h"

class Autocomplete{
protected:
    TrieNode *rootNode;
public:
    Autocomplete();///empty constructor
    Autocomplete(TrieNode* _rootNode);
    void insert(std::string word);  ///inserting words
    std::vector<std::string> getSuggestions(std::string word);  ///returning suggestions
};

#endif