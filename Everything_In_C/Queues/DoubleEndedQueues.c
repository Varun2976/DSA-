#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    struct queue *next;
}*front = NULL , *rear = NULL ,*new_record,*temp;

void insert_rear(){
    new_record = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter new value rear : ");
    scanf("%d" , &new_record -> data);

    new_record -> next = NULL;

    if(rear == NULL){
        front = new_record;
        rear = new_record;
    }
    else{
        rear -> next = new_record;
        rear = new_record;
    }
}
void insert_front(){
    new_record = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter new value at front : ");
    scanf("%d" , &new_record -> data);

    new_record -> next = front;

    if(front = NULL){
        front = rear = new_record;
    }
    else{
        front = new_record;
    }
}
void delete_front(){
    if(front == NULL){
        printf("Nothing to dequeue from front");
        return;
    }
    temp = front;
    front = front -> next;
    if(front == NULL){ //this means that there is only one element in the entire queue
        rear = NULL;
    }
    free(temp);
}
void delete_rear(){
    if(rear == NULL){
        printf("Nothing to dequeue at rear.");
        return;
    }
    temp = front;
    if(front == rear){
        front = rear = NULL;
        free(temp);
        return;
    }
    while(temp -> next != rear){
        temp = temp -> next;
    }
    free(rear);
    rear = temp;
    rear -> next = NULL;

}
void display(){
    if(front == NULL){
        printf("The queue is empty.");
        return;
    }
    temp = front;
    while(temp != NULL){
        printf("%d" , temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
int main(){

}