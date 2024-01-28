#include <stdio.h>
#include <stdlib.h>

// C implementation of a doubly linked list

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int data, int pos);
void print();

int main(){
    insert(45, 1);
    insert(84, 1);
    insert(56, 1);
    insert(23, 1);
    print();
    return 0;
}

void insert(int data, int pos){
    struct Node *tmp = (struct Node*) malloc(sizeof(struct Node));
    tmp->data = data;

    if (pos == 1){
        tmp->next = head;
        head = tmp;
        tmp->prev = head;
        tmp->next->prev = tmp;
        return;
    }
}

void print(){
    struct Node *tmp = head;
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
}