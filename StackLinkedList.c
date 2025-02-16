#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** top, int value);
int pop(struct Node** top);
int peek(struct Node* top);
void display(struct Node* top);

int main() {
    struct Node* top = NULL; 
    int choice, value;

    do {
        printf("\n** Stack Operations **\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&top, value);
                break;
            case 2:
                value = pop(&top);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                value = peek(top);
                if (value != -1) {
                    printf("Top value: %d\n", value);
                }
                break;
            case 4:
                display(top);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a value between 1 and 5.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}


void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack overflow! Unable to push %d onto the stack.\n", value);
        return;
    }
     newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed onto stack.\n", value);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow! No elements to pop.\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty! No elements to peek.\n");
        return -1;
    }
    return top->data;
}

void display(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are: ");
        struct Node* temp = top;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
