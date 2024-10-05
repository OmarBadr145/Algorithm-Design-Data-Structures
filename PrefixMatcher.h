#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include <string>
#include <vector>
#include "Autocomplete.h"

class PrefixMatcher{
protected:
    TrieNode * rootNode;
public:
    PrefixMatcher();
    int selectRouter(std::string networkAddess);// return the router with the longest matching prefix
// We've made this a string for ease of implementation, if you'd like to work with binary numbers in your implementation feel free but for testing you need to provide an interface that takes a string
    void insert(std::string address, int routerNumber); // add a router address
};
#endif