#include <cstdio>

struct Element {

    char prefix[2];

    Element* next;
    Element* previous;
    
    void insert_before (Element* new_element) {

        new_element->previous = this->previous;
        this->previous = new_element;
    }

    void insert_after (Element* new_element) {
        new_element->next = next;
        this->next = new_element;
    }

    char operating_number[];
};


int main () {

    Element word1, word2, word3;

    // Assign "one" to word1.operating_number
    word1.operating_number[0] = 'o';
    word1.operating_number[1] = 'n';
    word1.operating_number[2] = 'e';
    word1.operating_number[3] = '\0';

    // Assign "pan" to word2.operating_number
    word2.operating_number[0] = 'p';
    word2.operating_number[1] = 'a';
    word2.operating_number[2] = 'n';
    word2.operating_number[3] = '\0';

    // Assign "man" to word3.operating_number
    word3.operating_number[0] = 'm';
    word3.operating_number[1] = 'a';
    word3.operating_number[2] = 'n';
    word3.operating_number[3] = '\0';

    word1.insert_after(&word2);
    word2.insert_after(&word3);

    word3.insert_before(&word2);
    word2.insert_before(&word1);

    word3.next = nullptr;
    word1.previous = nullptr;

    for (Element *cursor = &word1; cursor != nullptr; cursor = cursor-> next) {
       printf("%s\n",cursor->operating_number); 
    }
    for (Element *cursor = &word3; cursor != nullptr; cursor = cursor-> previous) {
       printf("%s\n",cursor->operating_number); 
    }
}
