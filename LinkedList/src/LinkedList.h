using namespace std;
#include <iostream>
struct Node {
    int cargo;
    Node* next;

    // constructors
    Node();
    Node(int);
    Node(int, Node*);
};
