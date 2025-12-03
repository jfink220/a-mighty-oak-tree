#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/node.hpp"

TEST_CASE(" Can make nodes "){
    Squirrel cheeks = Squirrel("Cheeks");
    Node* node_one = new Node(&cheeks);

    Squirrel squeaks = Squirrel("Squeaks");
    Node* node_two = new Node(&squeaks);

    Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
    Node* node_three = new Node(&fluffybutt);

    REQUIRE(node_one->get_squirrel()->get_name() == "Cheeks");
    REQUIRE(node_two->get_squirrel()->get_name() == "Squeaks");
    REQUIRE(node_three->get_squirrel()->get_name() == "Mr. Fluffy Butt");
}

TEST_CASE(" Can link nodes of tree. Can set both nodes and retrieve them"){
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

    REQUIRE(node_two == retrieved_node_two);
    REQUIRE(node_three == retrieved_node_three);
    
    
}