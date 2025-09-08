#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
}*new_record, *first,*last,*temp;
void create()
{
    first = NULL;
    last = NULL;
}
void insert_at_front(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter new data : ");
    scanf("%d" , &new_record -> data);

    new_record -> next = NULL;

    if(first == NULL){
        first = new_record;
        last = new_record;
    }
    else{
        last -> next = new_record;
        last = new_record;
    }
}
void insert_at_back(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter new data :");
    scanf("%d" , &new_record -> data);

    if(first == NULL){
        first = last = new_record;
    }
    else{
        new_record -> next = first;
        first = new_record;
    }
}
void insert_at_middle(){
    new_record = (struct node *)malloc(sizeof(struct node));
    
    
}
void display(){
    new_record = first;
    while(new_record != NULL){
        printf("%d ->" , new_record -> data);
        new_record = new_record -> next;
        
    }
}
    

int main()
{
    create();
    insert_at_back();
    insert_at_back();
    insert_at_back();
    insert_at_back();
    display();

    return 0;
}