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
    int pos , i = 1;
    printf("Enter new value : ");
    scanf("%d" , &new_record -> data);
    new_record = (struct node *)malloc(sizeof(struct node));

    if(first == NULL){
        first = last = new_record;
        return;
    }
    temp = first;
    while(i < pos && temp != NULL){
        temp = temp -> next;
        i++;
    }
    if(temp == NULL){
        printf("\nPosition out of range.");
        free(new_record);
        return;
    }
    new_record->next = temp-> next;
    temp -> next = new_record;

    if(temp == last){
        last = new_record;
    }
    
    
}
void delete_at_front(){
    if(first == NULL){
        printf("List is empty\n");
        return;
    }
    temp = first;

    first = first -> next;

    free(temp);
    if(first == NULL){

        last = NULL;
    }
    
}
void delete_at_back(){
    if(first == NULL){
        printf("List is empty\n");
        return;
    }
    if(first == last){
        free(first);
        first = last = NULL;
        return;
    }
    temp = first;
    while(temp -> next != last){
        temp = temp -> next;
    }
    free(last);
    last = temp;
    last -> next = NULL;
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
    insert_at_front();
    insert_at_front();
    insert_at_front();
    insert_at_front();
    delete_at_front();
    display();

    return 0;
}