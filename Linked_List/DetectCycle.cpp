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
    bool Detect(){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                return true;
            }

        }
        return false;
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
    
    return 0;
}