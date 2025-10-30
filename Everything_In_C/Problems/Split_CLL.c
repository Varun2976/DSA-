#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*new_record,*first,*last,*temp,*head1,*head2,*slow,*fast;
struct node *head1 = NULL;
struct node *head2 = NULL;

void create(){
    first = NULL;
    last = NULL;
}
void insert(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you wanna insert : ");
    scanf("%d" , &new_record -> data);
    if(first == NULL){
        first = last = new_record;
        last -> next = first;
    }
    else{
        last -> next = new_record;
        new_record -> next = first;
        last = new_record;
    }

}
void display(){
    if(first == NULL){
        printf("The list is empty");
        return;
    }
    temp = first;
    do{
        printf("%d ->" , temp -> data);
        temp = temp -> next;
    }while(temp != first);
}
void Split(){
    if(first == NULL){
        return ;
    }
    struct node *slow = first;
    struct node *fast = first;

    while(fast -> next != first && fast -> next -> next != first){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    if(fast -> next -> next == first){
        fast -> next = first;
    }
    head1 = first;
    head2 = slow -> next;

    slow -> next = head1;

    fast -> next = head2;
}
int main(){
    create();
    insert();
    insert();
    insert();
    display();
    Split();
    display();
    return 0;
}