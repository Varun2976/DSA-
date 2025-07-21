#include <iostream>
using namespace std;
//******************** REMOVING A NODE FROM THE MIDDLE*********************
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
    void Delete_Middle(int pos){
        Node *temp = head;
        int count = 0;
        
       
    }
    
    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp -> data << " ";
            temp = temp ->next;
        }
    }
};
