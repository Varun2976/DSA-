#include <stdio.h>
#include <stdlib.h>

struct Student{
    int data;
    struct Student *next , *prev;
}*new_record,*first,*last,*temp;


void insert_at_head(){
    new_record = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter a value : ");
    scanf("%d" , &new_record -> data);
    if(first == NULL){
        first = last = new_record;
        last -> next = first;
    }
    else{
        new_record -> next = first;
        first = new_record;;
        last -> next = first;
    }

}
void insert_at_end(){
    new_record = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter the value to insert at end : ");
    scanf("%d" , &new_record -> data);

    if(first == NULL){
        first = last = new_record;
        last -> next = first;
    }
    else{
        last -> next = new_record;
        new_record -> prev = last;
        new_record -> next = first;
        first -> prev = new_record;
    }
}
void display(){
    if(first == NULL){
        printf("This is an empty list.");
    }
    temp = first;
    while(first != NULL){
        printf("%d", temp -> data);
        temp = temp -> next;

    }
}
int main(){

    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    display();
    return 0;
}