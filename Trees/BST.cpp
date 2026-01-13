#include <iostream>
struct node{
    int data;
    struct node *left , *right;
}*first,*last,*temp,*next,*prev,*new_record,*root;

void create(){
    root = NULL;
}
void insert(int val){
    new_record = new node;

    new_record -> data = val;
    new_record -> right = NULL;
    new_record -> left = NULL;

    prev = root;
    temp = root;

    if(root == NULL){
        prev = temp;
        root = new_record;
    }
    else{
        while(temp != NULL){
            prev = temp;
            if(new_record -> data <= temp -> data){
                temp = temp -> left;
            }
            else{
                temp = temp -> right;
            }

            if(new_record -> data <= prev -> data){
                prev -> left = new_record;
            }
            else{
                prev -> right = new_record;

            }
        }
    }


}

#define MAX 100;
void BFS(node *root){
    if(root == NULL){
        return;
    }
    else{
        node *queue[MAX];
        int front =0 , rear =0;
        queue[0] = root;
        queue[rear++];
        
        while(front < rear){
            node *current = queue[front++];
            cout << current -> data <<" ";

            if(current -> left != NULL){
                queue[rear++] = current -> left;

            }
            else{
                queue[rear++] = current -> right;
            }

        }
    }
}
int main(){

}