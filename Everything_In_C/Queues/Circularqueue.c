#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first,*last,*temp;

void enqueue(int value){
    temp = (struct Node  *)malloc(sizeof(struct Node));
    temp -> data = value;
    

    if(first == NULL){
        first = last = temp;
        last -> next = first;
    }
    else{
        last -> next = temp;
        last = temp;
        last -> next = first;
    }

}
void dequeue(){
    if(first == NULL){
        printf("Queue is empty");
        return;
    }
    if(first == last){
        free(first);
        first = last = NULL;
    }
    else{
        struct Node *del = first;
        first = first -> next;
        last -> next = first;
        free(del);
    }
}
void display(){
    if(first == NULL){
        printf("Queue is empty");
        return;
    }
    struct Node *ptr = first;
    do{
        printf("%d -> " , ptr -> data);
        ptr = ptr -> next;
    }while(ptr != first);
}
int main(){
    enqueue(12);
    enqueue(24);
    enqueue(45);
    enqueue(2);
    enqueue(22);
    display();
    printf("\n");
    dequeue();
    display();
    
    
    return 0;
}