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
void enqueue(int val){
    new_record = (struct queue *)malloc(sizeof(struct queue));
    
    if(rear == NULL){
        front = rear = NULL;
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



int main()
{
    return 0;
}