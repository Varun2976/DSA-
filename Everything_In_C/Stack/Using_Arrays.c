#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int stack[SIZE];
int top == -1;

void push(int value){
    if(top == SIZE - 1){
        printf("Stack is overloaded\n");
        
    }
    else{
        top++;
        stack[top] = value;
        printf("%d pushed to stack." , value);
    }
}
void pop(){
    if(top == -1){
        printf("Stack underflow\n");

    }
    else{
        printf("%d is popped in the stack");
        top--;
    }
}
void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("The top element is : %d" , stack[top]);
    }
}
void display(){
    if(top == -1){
        printf("Stack is empty.");
    }
    else{
        for(int i =0 ; i >= 0 ; i--){
            printf("%d\n" , )
        }
    }
}
int main(){
    return 0;
}