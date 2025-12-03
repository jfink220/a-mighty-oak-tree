#include <string>
#include "node.hpp"
Node::Node(Squirrel* squirrel) : squirrelPtr(squirrel){

}

Node* Node::left(){
   return leftPtr;
}

Node* Node::right(){
   return rightPtr;
}

void Node::set_left(Node* node){
   leftPtr = node;
}

void Node::set_right(Node* node){
   rightPtr = node;
}

Squirrel* Node::get_squirrel(){
   return squirrelPtr;
}
