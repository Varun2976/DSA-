#include <iostream>
using namespace std;
//************************************* PUSH - FRONT ************************************


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
    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode; // Determines that my linked list is empty since the last and first both would be NULL
        }
        else{
            newNode -> next = head;
            head = newNode;
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
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.printLL();
    return 0;
}

