#include <bits/stdc++.h>
using namespace std;

int SumTree(TreeNode* root){
    if(root == NULL){
        return 0;
    }

    int leftSum = SumTree(root -> left);
    int rightSum = SumTree(root -> right);

    root -> data += leftSum + rightSum;

    return root -> data;

}
int main(){
    return 0;
}