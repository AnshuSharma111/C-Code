#include <stdio.h>
#include <stdlib.h>

// Defining a node
struct Node{
    int data;
    struct Node *next;
};

struct Node *head; //Defining the head of the linked list as a GLOBAL VARIABLE
struct Node* insert(struct Node* head, int x, int pos); // Defining the insert function
void print(struct Node* head); // Function to print the list
void delete(int ind); // Function to delete a node

int main(){
    head = NULL; //first, the linked list is empty
    register int i = 0;

    int size, val;
    printf("Enter how many elements you want in the linked list: ");
    scanf("%d", &size);

    // Taking initial list
    for (i=0; i<size; i++){
        printf("Enter element: ");
        scanf("%d", &val);
        head = insert(head, val, 1);
    }

    int flag = 0, ch, pos;
    
    while(flag == 0){ // Menu driven program
        printf("Enter what operation do you want to perform on the linked list:\n1)Insert Element\n2)Delte Index\n3)Show list\n4)Exit\nEnter Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            printf("Enter position: ");
            scanf("%d", &pos);
            head = insert(head, val, pos);
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
            flag = 1;
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
}

struct Node* insert(struct Node* head, int x, int pos){
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;

    if (pos == 1){
        temp->next = head;
        head = temp;
        return head;
    }

    struct Node *temp2 = head;
    // Traverse to n-1 th node
    for(int i = 0; i< pos-2; i++){
        temp2 = temp2->next;
    }

    temp->next = temp2->next;
    temp2->next = temp;

    return head;
}

void print(struct Node* head){
    while (head != NULL){
        printf("%d ", head->data);
        head = head->next;
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