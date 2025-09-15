#include <stdio.h>
#include <stdlib.h>


struct stack{
    int data;
    struct stack *next;
}*new_record,*temp;
struct stack *top = NULL;
void create(){
    top = NULL;

}
int isEmpty(){
    return(top == NULL);
}
void push(){
    new_record = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the value you wanna insert at the top : ");
    scanf("%d" , &new_record -> data);
    if(new_record == NULL){
        printf("The stack is full.");
    }
    new_record -> next = top;
    top = new_record;
}
void pop(){
    if(isEmpty()){
        printf("Stack underflow.");
    }
    struct stack *temp = top;
    top = top -> next;
    free(temp);

}
void display(){
    if(isEmpty()){
        printf("Stack is empty");
    }
    struct stack *temp = top;
    while(temp != NULL){
        printf("%d" , temp -> data);
        temp = temp -> next;
    }

    
}
int main(){

    
    display();
    return 0;
}