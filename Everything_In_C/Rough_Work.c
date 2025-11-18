#include <stdio.h>
#include <stdlib.h>
#define MAX 100;
struct node{
    int data;
    struct node *left , *right;
}*first,*last,*temp,*next,*prev,*new_record,*root;
void create(){
    root = NULL;
}
void insert(int val){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value : ");
    scanf("%d", &new_record -> data);
    new_record -> data = value;
    new_record -> right = NULL;
    new_record -> left = NULL;

    prev = root;
    temp = root;

    if(root == NULL){
        prev = temp;
        root = new_record;
    }
    else{
        prev = root;
        temp = root;
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
void BFS(){
    
    if(root == NULL){
        return;
    }
    struct node *queue[MAX];
    int front = 0 , rear =0;
    queue[rear++] = root;
    while(front < rear){
        struct node *current = queue[front++];
        printf("%d " , current -> data);
        if(current -> left == NULL){
            queue[rear++] = current -> left;
        }
        if(current -> right == NULL){
            queue[rear++] = current -> right;
        }
    }


}
int main(){
   
    


    return 0;
}