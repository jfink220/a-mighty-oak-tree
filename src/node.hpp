#include <string>
#include "squirrel.hpp"
#pragma once
class Node{
    private:
        Squirrel* squirrelPtr;
        Node* leftPtr;
        Node* rightPtr;
    public:
        Node(Squirrel* squirrel);
        Node* left();
        Node* right();
        void set_left(Node* in_node);
        void set_right(Node* in_node);
        Squirrel* get_squirrel();
};         