#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}


void deleteNode(struct Node** head, int value) {
    struct Node* temp = *head;
    struct Node* prev = NULL;


    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }


    if (temp != NULL) {

        if (prev != NULL)
            prev->next = temp->next;
        else
            *head = temp->next;

        // Free the memory occupied by the node
        free(temp);
    } else {
        printf("Node with value %d not found\n", value);
    }
}

// Function to traverse and print the elements of the linked list
void traverseList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert some nodes
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);

    // Print the initial linked list
    printf("Linked List: ");
    traverseList(head);

    // Delete a node with value 20
    deleteNode(&head, 20);

    // Print the updated linked list
    printf("Linked List after deletion: ");
    traverseList(head);

    return 0;
}
