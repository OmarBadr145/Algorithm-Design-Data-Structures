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

    void setChild(int i, TrieNode * node){
        childNode[i] = node;
    };
    
    bool getWordEnd(){   ///getter for end of word
        return endOfWord;
    }
    
    void setWordEnd(int value){     ///setter for word end
        endOfWord = value;
    }

    void setRouterNumber(int number){   ///setter for router number
        routerNum = number;
    }
    int getRouterNumber(){   ///getter for router number
        return routerNum;
    }

};

#endif