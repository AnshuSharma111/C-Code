#include <stdio.h>
#include <stdlib.h>

// Defining a node
struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL; //Declaring the head of the linked list as a GLOBAL VARIABLE
void insert(int x, int pos); // Declaring the insert function
void print(); // Function to print the list
void delete(int ind); // Function to delete a node
void reverse(); // Reverse linked list

int main(){
    register int i = 0;

    int size, val;
    printf("Enter how many elements you want in the linked list: ");
    scanf("%d", &size);

    // Taking initial list
    for (i=0; i<size; i++){
        printf("Enter element: ");
        scanf("%d", &val);
        insert(val, 1);
    }

    int flag = 0, ch, pos;
    
    while(flag == 0){ // Menu driven program
        printf("Enter what operation do you want to perform on the linked list:\n1)Insert Element\n2)Delte Index\n3)Print list\n4)Reverse List\n5)Exit\nEnter Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            printf("Enter position: ");
            scanf("%d", &pos);
            insert(val, pos);
            print(head);
            break;
        case 2:
            printf("Enter position of element to delete: ");
            scanf("%d", &pos);
            delete(pos);
            printf("After deletion list is: ");
            print(head);
            break;
        case 3:
            printf("The list is: ");
            print(head);
            break;
        case 4:
            reverse();
            printf("Now the list is: ");
            print(head);
            break;
        case 5:
            flag = 1;
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
}

void insert(int x, int pos){
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;

    if (pos == 1){
        temp->next = head;
        head = temp;
        return;
    }

    struct Node *tmp2 = head;
    for(int i = 0; i < pos-2; i++)
    tmp2 = tmp2->next;

    temp->next = tmp2->next;
    tmp2->next = temp;
}

void print(){
    struct Node *temp = head;
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delete(int ind){
    struct Node* traverse = head;

    if (ind == 1){
        head = traverse->next;
        free(traverse);
        return;
    }

    // Traverse to n-1 th node
    for (int i=0; i<ind-2; i++)
        traverse = traverse->next;
    
    struct Node* temp = traverse->next; // n-th node
    traverse->next = temp->next; // n-1 th node points to n+1 th node
    free(temp); // free nth node
}

void reverse(){
    struct Node *cur = head, *nxt, *prev = NULL;

    while (cur != NULL){
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    head = prev;
}