#include <bits/stdc++.h>
using namespace std;


vector<int> LevelOrder(TreeNode* root){
    vector<int> ans;

    if(root == NULL){
        return 0;
    }

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();

        if(node -> left != NULL){
            q.push(node -> left);
        }
        if(node -> right != NULL){
            q.push(node -> right);
        }
    }
}
int main(){
    return 0;
}