#include <iostream>
using namespace std;


class Node {

    public:
        int  data;
        Node *next;
};

main () {

    Node *HADE = NULL;
    Node *ptr = NULL;

    HADE = new Node();

    HADE->data = 10;
    HADE->next = NULL;

    ptr = new Node();

    ptr->data = 15;
    ptr->next = NULL;

    HADE->next = ptr;
    
    ptr = new Node();

    ptr->data = 11;
    ptr->next = NULL;

    HADE->next->next = ptr;

    ptr = HADE;

    while (ptr != NULL) {
        cout << ptr->data << endl;

        ptr = ptr->next;
    }


}