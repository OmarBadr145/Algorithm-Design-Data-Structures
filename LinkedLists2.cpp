#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////


bool LinkedList::swap(int pos1, int pos2){
    Node* currNode = head;
    Node* node1 = NULL;
    Node* node2 = NULL;

    while(currNode != NULL){
        if(currNode->data == pos1){
            currNode->data = pos2;
            node1 = currNode;
            if(node2){
                return true;
            }
        }
        else if(currNode->data == pos2){
            currNode->data = pos2;
            node2 = currNode;
            if(node1){
                return true;
            }
        }
        currNode = currNode->link;
    }
    if(node1){
        node1->data = pos1;
    }
    else if(node2){
        node2->data = pos1;
    }
    return false;
}

