#include <iostream>

struct Node {
    std::string name; // this is our data
    // we could have more data here
    Node * next;
};


// the front is the head
// the back is the tail

Node * push_front(Node * head, std::string name) {
    Node * node = new Node;
    node->name = name;
    node->next  = head;
    return node;   // new head of the list
}


int main() {

    // Node * head = push_front(nullptr, "Mork");

    Node * node1 = new Node;
    node1->name = "Nick";

    Node * node2 = new Node;
    node2->name = "Kimi";

    Node * node3 = new Node;
    node3->name = "Zoe";

    Node * node4 = new Node;
    node4->name = "Mork";

    std::cout << "The address of node1 is " << node1 << std::endl;
    std::cout << "The address of node2 is " << node2 << std::endl;
    std::cout << "The address of node3 is " << node3 << std::endl;
    std::cout << "The address of node4 is " << node4 << std::endl;

    (*node1).next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    Node * currentNode = node1;
    while(currentNode != nullptr) {
        std::cout << currentNode->name << std::endl;
        currentNode = currentNode->next;
    }

}