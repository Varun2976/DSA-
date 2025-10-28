#include <stdio.h>
#include <stdlib.h>

struct Student {
    int data;
    struct Student *next, *prev;
} *first = NULL, *last = NULL, *new_record, *temp;

void insert_at_head() {
    new_record = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter a value : ");
    scanf("%d", &new_record->data);

    if (first == NULL) {
        first = last = new_record;
        first->next = first;
        first->prev = first;
    } else {
        new_record->next = first;
        new_record->prev = last;
        first->prev = new_record;
        last->next = new_record;
        first = new_record;
    }
}

void insert_at_end() {
    new_record = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter the value to insert at end : ");
    scanf("%d", &new_record->data);

    if (first == NULL) {
        first = last = new_record;
        first->next = first;
        first->prev = first;
    } else {
        new_record->prev = last;
        new_record->next = first;
        last->next = new_record;
        first->prev = new_record;
        last = new_record;
    }
}

void insert_at_middle(int pos) {
    if (first == NULL || pos <= 1) {
        insert_at_head();
        return;
    }

    temp = first;
    int count = 1;

    while (count < pos - 1 && temp->next != first) {
        temp = temp->next;
        count++;
    }

    if (temp == last) {
        insert_at_end();
        return;
    }

    new_record = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter the value you wanna insert somewhere : ");
    scanf("%d", &new_record->data);

    new_record->next = temp->next;
    new_record->prev = temp;
    temp->next->prev = new_record;
    temp->next = new_record;
}

void display() {
    if (first == NULL) {
        printf("This is an empty list.\n");
        return;
    }

    temp = first;
    printf("List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("(back to start)\n");
}

int main() {
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    display();

    int pos;
    printf("\nEnter position to insert in middle: ");
    scanf("%d", &pos);
    insert_at_middle(pos);
    display();

    return 0;
}