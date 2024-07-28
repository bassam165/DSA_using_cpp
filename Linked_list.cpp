#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp-> data<< endl;
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;

    Node* head = node1;
    print(head);
    insertAtHead(head, 12);
    cout<<head<<endl;
    print(head);
    return 0;
}
