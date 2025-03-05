include <iostream>
include <string>
include <memory>

struct Node {

    std::string data;
    std::shared_ptr<Node> nextNode;
    std::shared_ptr<Node> previousNode;
};

class doublyLinkedList {

private:
    std::shared_ptr<Node> head;

public:
    void insert(const std::string& str) {
        auto newNode = new Node();
        newNode.data = str;
        newNode->nextNode = nullptr;
        newNode->previousNode = nullptr;

    if ( head == nullptr ) {
        head = newNode;
    } else {


    }
 
};
