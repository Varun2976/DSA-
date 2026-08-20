#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isSameTree(Node* p , Node* q){
    if(p == NULL || q==NULL){
        return p == q;
    }

    isSameLeft = isSameTree(p-> left,q->left);
    isSameRight = isSameTree(p-> right,q->right);

    return isSameLeft && isSameRight && p->val == q->val;
}

int main(){
    return 0;
}