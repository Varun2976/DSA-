#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public :
    List() {
        head = tail = NULL;
        }
    
    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp -> data << " ";
            temp = temp ->next;
        }
    }
};