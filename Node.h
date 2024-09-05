#ifndef NODE_H
#define NODE_H

class Node{
protected:
    int data;
    Node* link;
public:
    Node(int data, Node* link = nullptr);   ///Constructor
    int getData();  ///gets data
    Node* getNext(); ///gets next link
    void setNext(Node* link);   ///setter for next 
};
#endif