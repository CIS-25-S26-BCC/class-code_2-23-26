#include <iostream>

struct Node {
    std::string name;
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

void insert_after(Node* prev, std::string name) {
    if (!prev) return;          // nothing to do
    Node* node  = new Node;
    node->name = name;
    node->next  = prev->next;
    prev->next  = node;
}

void print_list(Node* head) {
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        std::cout << cur->name << std::endl;
    }
    std::cout << std::endl;
}

Node* remove_head(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* oldHead = head;
    head = head->next;
    delete oldHead; // crucial
    return head;
}

void remove_after(Node* prev) {
    if (prev == nullptr || prev->next == nullptr) {
        return;   // nothing to remove
    }
    Node* toRemove = prev->next;
    prev->next = toRemove->next;
    delete toRemove;
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

    Node * head = push_front(node1, "Martha");

    insert_after(node2, "Bella");
    print_list(head);
    head = remove_head(head);
    print_list(head);
    remove_after(node2);
    print_list(head);
    
}