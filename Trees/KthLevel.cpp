#include <bits/stdc++.h>
using namespace std;

void Kth_Level(TreeNode* root, int K ){
    queue<TreeNode*>q;
    q.push(root);
    int level = 1;

    while(!q.empty()){
        if(level == K){
            vector<int>ans;

            for(int i = 0 ; i < size;i++){
                ans.push_back(q.front() -> val);
                q.pop();
            }
            return ans;
        }

        for(int i = 0 ; i < size ; i++){
            TreeNode* node = q.front();
            q.pop();

            if(node -> left){
                q.push(node -> left);
            }
            if(node -> right){
                q.push(node -> right);
            }

        }
        level++;
    }
    return {};
}
int main(){

    return 0;
}