#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next , *prev;

}*new_record , *first,*last,*temp;
void create(){
    first = NULL;
    last = NULL;
}
void insert_at_end(){
    new_record=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert : ");
    scanf("%d" , &new_record -> data);
    if(first == NULL){
        first = new_record;
        last = new_record;
        first -> next = first;
        first -> prev = last;
    }
    else{
        new_record -> next = first;
        last -> next = new_record;
        new_record -> prev = last;
        first -> prev = new_record;
        last = new_record;
    }

}
void insert_at_front(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you wanna insert at the first part :");
    scanf("%d" , &new_record -> data);

    if(first == NULL){
        first = new_record;
        last = new_record;
        first -> next = first;
        first -> prev = last;
    }
    else{
        new_record -> next = first;
        first -> prev = new_record;
        first = new_record;
        new_record -> prev = last;
        last -> next = new_record;
    }
}
void display() {
    if (first == NULL) {
        printf("The list is empty.\n");
        return;
    }

    temp = first;
    while (temp->next != first) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data); 
}
int main(){
    insert_at_front();
    insert_at_front();
    insert_at_front();
    insert_at_front();
    insert_at_front();
    display();
    return 0;
}