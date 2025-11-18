#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*first,*last,*temp,*prev,*new_record,*root;
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
        first = new_record;
    }
}
void insert_at_middle(){
    int pos;
    printf("Enter the position you wanna insert after : ");
    scanf("%d" , &pos);
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert at middle : ");
    scanf("%d" , &new_record -> data);

    temp = first;

    for(int i = 1 ; i < pos ; i++){
        if(temp == NULL){
            printf("Out of range \n");
            return;
        }
        else{
            temp = temp -> next;
        }
    }

    if(temp == NULL){
        printf("Out of range \n");
        return;
    }
    if(temp == last){
        insert_at_end();
        return;
    }
    new_record -> next = temp -> next;
    temp -> next = new_record;

    

}

void delete_at_end(){
    if(first == NULL){
        printf("Nothing to delete \n");
        return;
    }
    if(first == last){
        free(first);
        first = last = NULL;
    }
    temp = first;

    while(temp -> next != last){
        temp = temp -> next;
    }

    free(last);
    last = temp;
    last -> next = NULL;
}
void delete_at_front(){
    if(first == NULL){
        printf("Nothing to delete.\n");
        return;
    }
    temp = first;
    first = first -> next;
    free(temp);

    if(first == NULL){
        last = NULL;
    }
}
void delete_at_middle(){
    int pos ;
    printf("Enter the positon you wanna delete your data from : ");
    scanf("%d" , &pos);
    if(pos == 1){
        delete_at_front();
        return;
    }
    temp = first;
    for(int i =1 ; i < pos - 1 ; i++){
        if(temp == NULL || temp -> next == NULL){
            printf("Position out of range.");
            return;
        }
        temp = temp -> next;
    }
    struct node *new_record = temp -> next; //here i am using new_record just for deletion , no actual new node is being created
    if(temp -> next == last){
        delete_at_end();
    }
    temp -> next = new_record -> next;
    free(new_record);
    
}
void display(){
    if(first == NULL)
    {
        printf("Nothing to display.");
    }
    temp = first;
    while(temp != NULL){
        printf("%d  " , temp -> data);
        temp = temp -> next;
    }
}
int main(){
   
    


    return 0;
}