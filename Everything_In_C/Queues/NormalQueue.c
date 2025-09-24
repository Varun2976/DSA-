#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    struct queue *next;
}*front , *rear,*new_record,*temp;

void create(){
    struct queue *front = NULL;
    struct queue *rear = NULL;
}
void enqueue(){
    new_record = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter a data to insert : ");
    scanf("%d" , &new_record->data);
    if(rear == NULL){
        front = rear = new_record;
        new_record -> next = NULL;
    }
    else{
        rear -> next = new_record;
        rear = new_record;
    }
}
void dequeue(){
    if(front == NULL){
        printf("The stack is empty.");
    }
    temp = front;
    front = front -> next;
    free(temp);

    
}
void display(){
    temp = front;
    while(front != NULL){
        printf("%d" , temp -> data);
        temp = temp -> next;
    }
}



int main()
{   
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}