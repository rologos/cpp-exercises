#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class doublyLinkedList {

private:
    std::shared_ptr<Node> head;

public:
    void insertBeg(int data) {

    }
};
