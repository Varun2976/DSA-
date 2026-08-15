#include <bits/stdc++.h>
using namespace std;


int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHt = height(root -> left);
    int rightHt = height(root -> right);

    return max(leftHt,rightHt) + 1;

}
int main(){
    return 0;
}