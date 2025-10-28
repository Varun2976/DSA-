#include <stdio.h>

struct node{
    int data;
    struct node *left,*right;
}*root,*new_record,*temp,*prev;

void create(){
    root = NULL;
}
void insert(){
    int val;
    new_record = (struct node *)malloc(sizeof(struct node));
    new_record -> data = val;
    new_record -> left = NULL;
    new_record -> right = NULL;

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

int main()
{
    return 0;
}