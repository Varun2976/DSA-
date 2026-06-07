#include <bits/stdc++.h>
using namespace std;

class Node{
    Node* next;

    Node(int val){
        int data = val;
        next = NULL;
    }
}
class Queue{
    Node* head;
    Node* tail;

    public:
        Queue(){
            head = tail = NULL;
        }

        void push(int data){
            Node* newNode = new Node(data);
            if(empty()){
                head = tail = newNode;
            }
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }
        void pop(){
            if(empty()){
                cout << "LL is empty" << endl;
            }else{
                Node* temp = head;
                head = head -> next;
                delete temp;
            }
        }
        int front(){
            if(empty()){
                cout << "LL is empty" << endl;
                return -1;
            }else{
                return head -> data;
            }
        }
        bool empty(){
            return head == NULL;
        }
};
int main(){

    return 0;
}