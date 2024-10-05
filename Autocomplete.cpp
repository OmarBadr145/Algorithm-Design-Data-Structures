#include "Autocomplete.h"

Autocomplete::Autocomplete(){
    rootNode = new TrieNode();
};

Autocomplete::Autocomplete(TrieNode* _rootNode){
    rootNode = _rootNode;
};

void Autocomplete::insert(std::string word){
    TrieNode * currentNode = rootNode;  ///setting current node to the root node in the tree
    for(size_t i = 0; i < word.length(); i++){
        if(currentNode ->getChild(word[i] - 'a') == NULL){   /// subtracting 'a' from a letter in the word to get its asci value into intigers
            TrieNode * newNode = new TrieNode();
            currentNode -> setChild(word[i] - 'a', newNode);   ///fUCKN SICK idea haha, code pretty readable
        }
        currentNode -> getChild(word[i]-'a');
    }
    currentNode ->setWordEnd(true);
};


std::vector<std::string> Autocomplete::getSuggestions(std::string word){
    TrieNode * currentNode = rootNode;
    std::vector<std::string> result;
    for(size_t i = 0; i < word.length(); i++){
        if(currentNode -> getChild(word[i]-'a') == NULL){
            return result;
        }
        currentNode = currentNode -> getChild(word[i] - 'a');
    }
    std::vector<std::string> suggestions;
    getCompletions(currentNode, word, suggestions);
    return suggestions;

};

    void Autocomplete::getCompletions(TrieNode* node, std::string prefix, std::vector<std::string>& result){
        if (node == NULL){
            return;
        }
        if(node->getWordEnd()){
            result.push_back(prefix);
        }
        for(int i = 0;i < 27; i++){
            if(node->getChild(i)!= NULL){
                getCompletions(node->getChild(i), prefix + char ('a'+i), result);
            }
        }
        return;
    };




