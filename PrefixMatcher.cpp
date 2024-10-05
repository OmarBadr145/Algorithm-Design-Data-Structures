#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher(){
    rootNode = new TrieNode();
}

int PrefixMatcher::selectRouter(std::string networkAddress){
    TrieNode * currentNode = rootNode;

    int size = networkAddress.length();
    // int router = -1;

    for(size_t i = 0; i < size && currentNode->getChild(networkAddress[i]-'0');i++){
        currentNode = currentNode->getChild(networkAddress[i]-'0');
        if(currentNode == NULL){
            return -1;
        }
    }
    return currentNode->getRouterNumber();
};

void PrefixMatcher::insert(std::string address, int routerNumber){
    TrieNode * currentNode = rootNode;

    int size = address.length();

    for(int i = 0; i < size; i++){
        if(currentNode->getChild(address[i]-'0')==NULL){
            currentNode->setChild(address[i]-'0',new TrieNode);
        }
        currentNode = currentNode->getChild(address[i]-'0');
    }
    currentNode->setWordEnd(true);
    currentNode->setRouterNumber(routerNumber);
};