#include "Node.h"

Node::Node(int data, Node* link){ 
    this-> data = data;
    this->link = link;
};

int Node::getData(){
    return this->data;
};

Node* Node::getNext(){
    return this->link;
};

void Node::setNext(Node* link){
    this->link = link;
};