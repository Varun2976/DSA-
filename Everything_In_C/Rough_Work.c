#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    int roll,marks;
    char name[50];
    struct node *next;
}*new_record,*temp,*first,*last;

void create(){
    first = NULL;
    last = NULL;
}
void insert(){
    new_record = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Roll Number : ");
    scanf("%d",&new_record -> roll);
    printf("\nEnter Name : ");
    scanf("%s",new_record -> name);
    printf("\nEnter marks : ");
    scanf("%d",&new_record -> marks);
    printf("------------------------\n");

    if(first == NULL){
        first = last = new_record;
    }
    else{
        last -> next = new_record;
        last = new_record;
        new_record -> next = NULL;
    }

}
void sort(){
    struct node *i , *j;
    int temp , tempMarks;
    char tempName[50];

    for(i = first ; i->next != NULL ;i = i-> next){
        for(j = i -> next ; j -> next != NULL ; j = j -> next){
            if(i -> roll > j -> roll){
                temp = i -> roll;
                i -> roll = j -> roll;
                j -> roll = temp;

                strcpy(tempName, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, tempName);

                tempMarks = i->marks;
                i->marks = j->marks;
                j->marks = tempMarks;
            }
        }
    }
}
void display(){
    new_record = first;
    while(new_record  != NULL){
        printf("%d,%s,%d ->" ,new_record -> roll, new_record -> name,new_record -> marks);
        new_record = new_record -> next;
    }
}
int main(){
    create();
    insert();
    insert();
    insert();
    
    sort();
    display();
    return 0;
}