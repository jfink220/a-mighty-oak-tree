#include <iostream>

#include "src/node.hpp"
#include "src/squirrel.hpp"

int main() {
  Squirrel cheeks = Squirrel("Cheeks");
  Node* node_one = new Node(&cheeks);

  Squirrel squeaks = Squirrel("Squeaks");
  Node* node_two = new Node(&squeaks);

  Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
  Node* node_three = new Node(&fluffybutt);

  node_one->set_left(node_two);
  node_one->set_right(node_three);

  Node* retrieved_node_two = node_one->left();
  Node* retrieved_node_three = node_one->right();

  std::cout << "First squirrel: " << node_one->get_squirrel()->get_name() << std::endl;
  std::cout << "Second squirrel: " << retrieved_node_two->get_squirrel()->get_name() << std::endl;
  std::cout << "Third squirrel: " << retrieved_node_three->get_squirrel()->get_name() << std::endl;
}
