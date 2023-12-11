#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class Node{

 public:
 //declaring functions
  Node* getNext();
  void setNext(Node* nextNode);
  student* getStudent();
  Node(student* currentStudent);
  ~Node();
 private:
 //creating variables
  Node* next;
  Student* stu;
  




};
#endif

