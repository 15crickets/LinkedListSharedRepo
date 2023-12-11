#include <iostream>
#include <cstring>
#include "Node.h"
#include "student.h"

//constructor, in which the student is set.
Node::Node(student* currentStudent){
    stu = currentStudent;
    next = NULL;

}

//function that returns the student corresponding to the current node.
student* Node::getStudent(){
    return stu;
}

//function that sets the next node in the chain.
void Node::setNext(node* nextNode){
    next = nextNode;

}

//function that returns the next node in the chain.
node* Node::getNext(){
    return next;
}
//destructor, which clears the heap when the node is destroyed.
Node::~Node(){
    delete stu;
    next = NULL;

}

