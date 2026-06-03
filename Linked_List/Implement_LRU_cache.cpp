#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        int key;
        Node* prev;
        Node* next;


        Node(int k ,int v){
            key = k;
            val = v;
            prev = next = NULL;
        }

        

}
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    unordered_map<int,Node*>m;
    int limit;

void addNode(Node* newNode){
    Node* oldNext = head -> next;
    head -> next = newNode;
    oldNext -> prev = newNode;

    newNode -> next = oldNext;
    newNode -> prev = head;


}
void delNode(Node* oldNode){
    Node* oldPrev = oldNode -> prev;
    Node* oldNext = oldNode -> next;

    oldPrev -> next = oldNext;
    oldNext -> prev = oldPrev;
}
LRU_Cache(int capacity){
    limit = capacity;
    head -> next = tail;
    tail -> prev = head;
}



int get(int key){

}
void put(int key, int value){
    if(m[key] != m.end(){
        Node* oldNode = m[key];
        delNode(oldNode);
        m.erase(key);
    })
}
int main(){

    return 0;
}