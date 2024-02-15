#include <stdio.h>
#include <stdlib.h>

// C implementation of a doubly linked list

struct Node 
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

struct Node* generateNode(int val);
void insert(int pos, int val);
void print();

int main()
{
    return 0;
}

struct Node* generateNode(int val)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    return temp;
}

void insert(int pos, int val)
{
    struct Node* temp = generateNode(val);
    if (pos == 1)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
        return;
    }
}