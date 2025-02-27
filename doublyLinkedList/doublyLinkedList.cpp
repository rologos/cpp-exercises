include <iostream>
include <string>
include <memory>

struct node {

    std::string data;
    std::shared_ptr<node> nextNode;
    std::shared_ptr<node> previousNode;
}



