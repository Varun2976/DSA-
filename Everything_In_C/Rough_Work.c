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

void Inorder(struct node *ptr){
    if(ptr != NULL){
        Inorder(ptr -> left);
        printf("%d" , ptr -> data);
        Inorder(ptr -> right);
    }
}
int main(){
    create();
    insert(23);
    insert(32);
    insert(45);
    insert(10);
    insert(20);
    Inorder(root);
    


    return 0;
}