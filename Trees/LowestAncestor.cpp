#include <bits/stdc++.h>
using namespace std;

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }

        if(root -> val == p -> val || root -> val == q -> val){
            return root;
        }
        TreeNode* LeftLCA = lowestCommonAncestor(root -> left,p,q);
        TreeNode* RightLCA = lowestCommonAncestor(root -> right,p,q);

        if(LeftLCA && RightLCA){
            return root;
        }
        else if(LeftLCA != NULL){
            return LeftLCA;
        }else{
            return RightLCA;
        }

}
int main(){
    return 0;
}