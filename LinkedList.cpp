#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
};

LinkedList::~LinkedList(){
    Node* current = head;
    while (current != nullptr){
        Node* next = current -> getNext();
        delete current;
        current = next;
    }
};
LinkedList::LinkedList(int* array, int len){
    head = nullptr;
    if (len > 0){
        head = new Node(array[0]);   ///initialising 
        Node* current = head;
        
        for(int i = 1; i < len; i++){
            Node* newNode = new Node(array[i]);
            current->setNext(newNode);
            current = newNode;
        }
    }
};

void LinkedList::insertPosition(int pos, int newNum){
    if(pos <= 1){ ///if inseritng at front
        head = new Node(newNum,head);
        return;
    }

    Node *current = head;
    for (int i = 1; i < pos-1; i++){  //iterating till pos -1
        current = current->getNext();
        if(current == nullptr){ ///placing a new node at the end if pos is null
            Node* newNode = new Node(newNum,nullptr);  
        }
    }
    Node* newNode = new Node(newNum,nullptr);
    newNode->setNext(current->getNext()); ///getting the new node point to the rest of the links
    current->setNext(newNode); ///linking new node with first part of links
};

///implement print
void LinkedList::printList() {
    Node* currNode = head;
    while (currNode != nullptr) {
        std::cout << currNode->getData() << std::endl;
        currNode = currNode->getNext();
    }
    std::cout << std::endl;
};

