#include <stdio.h>
#include <stdlib.h>

int main(){
   Node *head = NULL; //start empty

   addNodeToFront(&head, 3);
   addNodeToFront(&head, 2);
   addNodeToFront(&head, 1);

   printList(head);

   //free the memory
   Node *current = head;
   Node *temp;
   
   while (current != NULL){
    temp = current;
    current = current->next;
    free(temp);
   }
   
    return 0;
}

//define a node. typedef allows us to create a struct each time we write Node
//nodes have their data, and then the next connected node
typedef struct Node {
    int data;
    struct Node *next;
   } Node;

Node* createNode(int data){
    Node *newNode = (Node*)malloc(sizeof(Node)); //allocate memory for the new node
    if (newNode == NULL){
        fprintf(stderr, "Error allocating memory\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addNodeToFront(Node **head, int data){ //** is pointer to a pointer
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head){
    Node *current = head;
    while (current != NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}