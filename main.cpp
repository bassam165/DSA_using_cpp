#include <iostream>

using namespace std;


class node {
public:
    int data;
    node* next;
    
    //construtctor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main()
{
    node* node1 = new node();
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}
