#include "LinkedList.h"
#include <limits>
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

void LinkedList::insertPosition(int pos, int newNum) {
    // If inserting at the front or position is less than 1
    if (pos <= 1) {
        head = new Node(newNum, head);  // Insert at the front
        return;
    }

    Node* current = head;
    int count = 1;

    // Traverse the list until we reach the desired position or end of the list
    while (current->getNext() != nullptr && count < pos - 1) {
        current = current->getNext();
        count++;
    }

    // Now, current is either the last node or the node at pos-1
    // Insert the new node after the current node
    Node* newNode = new Node(newNum, current->getNext());  // New node points to the next node (or nullptr if at end)
    current->setNext(newNode);  // Current node now points to the new node
}


///implement print
void LinkedList::printList() {
    Node* currNode = head;
    if (head != NULL){
        std::cout << "[";
        while (currNode->getNext() != nullptr) {
            std::cout << currNode->getData() << " ";
            currNode = currNode->getNext();
        }
    std::cout << currNode->getData() << "]" << std::endl;
    }
};

bool LinkedList::deletePosition(int pos){
    if (pos < 1){
        return false;
    }
    if (head == nullptr){
        return false;
    }
    ///deleting head node
    if (pos == 1){
        Node* temp = head;  ///creating temp node
        head = head->getNext(); ///making head point to next node
        delete temp;
        return true;
    }

    ///deleting node at position
    Node* current = head;
    for (int i = 1; i < pos - 1 && current != nullptr; i++){
        current = current->getNext();
    }

    if (current == nullptr || current->getNext() == nullptr){ ///returning false if pos is out of bounds
        return false;
    }

    Node* temp = current->getNext();
    current->setNext(temp->getNext());
    delete temp;

    return true;

};

int LinkedList::get(int pos){
    if (pos < 1){
        return std::numeric_limits<int>::max();
    }

    Node* current = head;
    int count = 1;

    while (current != nullptr && count < pos){
        current = current->getNext();
        count++;
    }

    if (current == nullptr){
        return std::numeric_limits<int>::max();
    }

    return current->getData();
};

int LinkedList::search(int target){
    int index = 1;
    Node* temp = head;
    while (temp != NULL){
       if(temp->getData() == target){
        return index;
       } 
       temp = temp->getNext();
       index++;
    }
    return -1;
}

