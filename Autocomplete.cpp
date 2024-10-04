#include "Autocomplete.h"

Autocomplete::Autocomplete(){
    rootNode = new TrieNode();
};

Autocomplete::Autocomplete(TrieNode* _rootNode){
    rootNode = _rootNode;
};

void Autocomplete::insert(std::string word){
    TrieNode * currentNode = rootNode;  ///setting current node to the root node in the tree
    for(int i = 0; i < word.length(); i++){
        if(currentNode ->getChild(word[i] - 'a') == NULL){   /// subtracting 'a' from a letter in the word to get its asci value into intigers
            TrieNode * newNode = new TrieNode();
            currentNode -> setChild(word[i] - 'a', newNode);   ///fUCKN SICK idea haha, code pretty readable
        }
        currentNode -> getChild(word[i]-'a');
    }
    currentNode ->setWordEnd(true);
};



