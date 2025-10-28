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
void infixtopostfix(char *infix , char *postfix){
    int i,k = 0;
    for(i = 0; infix[i];i++){
        char c = infix[i];
        if(isalnum(c)){
            postfix[i++];
        }
        else if(c == "("){
            push(c);
        }
        else if(c == ")"){

        }
    }

}
void infixtoprefix(){
    
}
void pop(){
    if(isEmpty()){
        printf("Stack underflow.");
    }
    struct stack *temp = top;
    top = top -> next;
    free(temp);

}
void peek(){
    if(isEmpty()){
        printf("Stack is empty.");
    }
    else{
        printf("Top : %d",top -> data);
    }
}
int precedence(char c){
    if(c =="^"){
        return 3;
    }
    else if(c == "*" || c == "/"){
        return 2;
    }
    else if(c=="+" || c == "-"){
        return 1;
    }
    return -1;
}
void reverse(char *exp){
    int len = strlen(exp);
    for(int i = 0 ; i < len/2 ; i++){
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
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

    
    
    return 0;
}