#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next, *prev;
}*new_record, *first,*last,*temp;
void create()
{
    first = NULL;
    last = NULL;
}
void insert_at_end(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value you wanna insert : ");
    scanf("%d" , &new_record -> data);

    if(first == NULL){
        new_record -> next = NULL;
        new_record -> prev = NULL;
        first = new_record;
        last = new_record;
    }
    else{
        new_record -> next = NULL;
        new_record -> prev = last;
        last -> next = new_record;
        last = new_record;

    }

}
void delete_at_front(){
    temp = first;
    first = first -> next;
    
    if(first != NULL){
        first -> prev = NULL;
        
    }
    temp -> next = NULL;
    free(temp);
}
void display(){
    if(first == NULL){
        printf("The list is empty.");
    }
    temp = first;
    while(first != NULL){
        printf("%d" , temp -> data);
        temp = temp -> next;
    }
}
int main(){
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    delete_at_front();
    display();

    
    return 0;
}