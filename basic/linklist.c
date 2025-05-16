#include <stdio.h>
#include <stdlib.h>

// define node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// free memory list
/* void freeList(Node* head) {
    Node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
} */

int main() {
    int n;
    printf("how many numbers you have? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("invalid input\n");
        return 1;
    }

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int val;
        printf("input the %d number: ", i + 1);
        scanf("%d", &val);

        // creat node
        Node* new_node = (Node*)malloc(sizeof(Node));
        if (!new_node) {
            printf("No memory space.\n");
            //freeList(head);
            return 1;
        }
        new_node->data = val;
        new_node->next = NULL;

        // add node to end of list
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    // show link list
    printf("The linked list: ");
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    // free memory
    // freeList(head);

    return 0;
}

