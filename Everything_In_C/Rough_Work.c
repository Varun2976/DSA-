#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left , *right;
}*first,*last,*temp,*next,*prev,*new_record,*root;
void create(){
    first = NULL;
    last = NULL;
}
void insert_at_end(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Insert a value at the end : ");
    scanf("%d" , &new_record -> data);

    if(first == NULL){
        first = new_record;
        last = new_record;
    }
    else{
        new_record -> next = NULL;
        last -> next = new_record;
        last = new_record;
    }
}
void insert_at_front(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you wanna enter at the front : ");
    scanf("%d" , &new_record -> data);

    if(first == NULL){
        first = new_record;
        last = new_record;
    }
    else{
        new_record -> next = first;
        first == new_record;
    }
}
int main(){
   
    


    return 0;
}