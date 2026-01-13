#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left , *right;
}*first,*last,*temp,*next,*prev,*new_record,*root;
void create(){
    root = NULL;
}
void insert(int val){
    new_record = (struct node *)malloc(sizeof(struct node));
    new_record -> data = val;
    new_record -> left = NULL;
    new_record -> right = NULL;

    prev = root;
    temp = root;
    if(root == NULL){
        prev = temp;
        root = new_record;
    }
    else{
        
        while(temp != NULL){
            if(new_record -> data <= temp -> data){
                temp = temp -> left;
            }
            else{
                temp = temp -> right;
            }
        }
        if(new_record -> data <= prev -> data){
            prev -> left = new_record;
        }
        else{
            prev -> right = new_record;
        }
    }
}

void Inorder(struct node *ptr){
    if(ptr != NULL){
        Inorder(ptr -> left);
        printf("%d" , ptr -> data);
        Inorder(ptr -> right);
    }
}
#define MAX 100;
void bfs(struct node *root){
    if(root == NULL){
        return;
    }
    struct node *queue[MAX];
    int front = 0 , rear = 0;

    queue[rear++] = root;
    while(front < rear){
        struct node *current = queue[front++];
        printf("%d " , current -> data);
        if(current -> left != NULL){
            queue[rear++] = current -> left;
        }
        if(current -> right != NULL){
            queue[rear++] = current -> right;
        }
    }

    


}
int main(){
   
    


    return 0;
}