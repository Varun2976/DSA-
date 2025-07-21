#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node *head;
    Node *tail;
    public :
    List() {
        head = tail = NULL;
        }
    void Delete_front(){
        Node *temp = head;
        head = head -> next;
        delete temp;
        if(head == NULL){
            head = tail = NULL;
        }
       
    }
    
    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp -> data << " ";
            temp = temp ->next;
        }
    }
};
