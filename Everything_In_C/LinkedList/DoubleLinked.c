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
    printf("\nEnter the value you wanna insert : ");
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
void insert_at_front(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value you wanna insert : ");
    scanf("%d" , &new_record -> data);
    new_record -> prev = NULL;

    if(first == NULL){
        new_record -> next = NULL;
        first = last = new_record;
    }
    else{
        new_record -> next = first;
        first -> prev = new_record;
        first = new_record;
    }

}
void insert_at_middle(int pos){
    if(pos <= 1){
        insert_at_front();
        return;
    }
    temp = first;
    int count = 1;

    while(temp!=NULL && count < pos -1){
        temp = temp -> next;
        count++;
    }
    if(temp == NULL || temp == last){
        insert_at_end();
        return;
    }
    new_record=(struct node *)malloc(sizeof(struct node));

    printf("\nEnter a value to insert at position : ");
    scanf("%d" , &new_record -> data);

    new_record -> next = temp -> next;
    new_record->prev = temp;
    temp -> next -> prev = new_record;
    temp -> next = new_record;

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
void delete_at_end(){
    temp = last;
    last = last -> prev;
    if(last != NULL){
        last -> next = NULL;
    }
    temp -> prev = NULL;
    free(temp);
}
void display(){
    if(first == NULL){
        printf("The list is empty.");
    }
    temp = first;
    while(temp != NULL){
        printf("%d ->" , temp -> data);
        temp = temp -> next;
    }
}
int main(){
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    
    display();
    insert_at_middle(3);
    display();

    
    return 0;
}