#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        int maxWidth = 0;
        while(q.size() > 0){
            int n = q.size();
            unsigned long long start = q.front().second;
            unsigned long long endi = q.back().second;
            maxWidth = max(maxWidth,(int)(endi - start + 1));
            for(int i= 0 ; i < n ; i++){
                auto curr = q.front();
                q.pop();
                if(curr.first -> left){
                    q.push({curr.first -> left , curr.second*2 + 1});
                }
                if(curr.first -> right){
                    q.push({curr.first -> right , curr.second*2 + 2});
                }
            }
        }
        return maxWidth;

    }
};

int main(){
    return 0;
}