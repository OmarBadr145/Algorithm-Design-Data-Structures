#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList {
private: 
    Node* head;
public:
    LinkedList(); //constructor to initialise it 
    LinkedList(int* array, int len); ///constructor that creates a list from a C array of length len
    ~LinkedList(); ///Destructor
    void insertPosition(int pos, int newNum);/// method to inserting a new node containing the number newNum into position pos
    bool deletePosition(int pos); /// method to remove the node at position pos from the list and delete it, if node deleted return true else if pos out of bounds return false
    int get(int pos); ///return member data a t locatoin pos, if pos out of bounds return std::numeric_limits < int >::max()
    int search(int target); ///searches list to find target and returns index, if not presenet return -1
    void printList(); ///print all the data seperated by list

};


 #endif