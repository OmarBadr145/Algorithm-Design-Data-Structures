#ifndef TRIENOTE_H
#define TRIENOTE_H
#include <iostream>
#include <string>
#include <vector>

class TrieNode{

protected:
    bool endOfWord;
    TrieNode * childNode[26];
    int routerNum;

public:
    TrieNode(){
        endOfWord = false; //initialise endOfWord to false
        for (int i = 0; i < 26; i++){
            childNode[i] = NULL;
        }
        routerNum = -1;
    };
    TrieNode * getChild(int i){
        return childNode[i];
    };
    




};

#endif