#include <iostream>
using namespace std;
// ---------------------------- MIDDLE OF A LINKED LIST----------------------------------


// --> Slow Fast Approach


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
    void Middle(){
        Node* slow = head;
        Node* fast = head;

        while(fast!=NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp -> data << " ";
            temp = temp ->next;
        }
    }
};
int main(){

    return 0;
}