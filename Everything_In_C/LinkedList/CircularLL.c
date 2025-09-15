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

    insert_at_head();
    insert_at_head();
    insert_at_head();
    insert_at_head();
    display();
    return 0;
}