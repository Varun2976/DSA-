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
        last = new_record;
    }
}
void insert_at_middle(int pos){
    new_record = (struct Student *)malloc(sizeof(struct Student));
    
    printf("Enter the value you wanna insert somewhere : ");
    scanf("%d"., &new_record -> data);

    if(pos <= 1){
        insert_at_front();
        return;
    }
    temp == first;
    int count = 1;

    while(temp != NULL && count < pos -1){
        temp = temp -> next;
        count++;
    }
    if(temp == NULL){
        printf("The list ii empty");
        return;
    }
    if(temp == last)
}
void display(){
    if(first == NULL){
        printf("This is an empty list.");
    }
    temp = first;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != first);
}
int main(){

    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    display();
    return 0;
}