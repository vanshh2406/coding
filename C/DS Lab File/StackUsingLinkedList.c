#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int val) {
    struct Node *n = malloc(sizeof(struct Node));
    if (!n) {
        printf("Memory allocation failed\n");
        return;
    }

    n->data = val;
    n->next = top;
    top = n;

    printf("Inserted %d\n", val);
}

void pop() {
    if (!top) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *t = top;
    printf("Deleted %d\n", t->data);
    top = top->next;
    free(t);
}

void display() {
    if (!top) {
        printf("Stack is empty\n");
        return;
    }

    struct Node *t = top;
    printf("Stack elements: ");
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    int ch, val;

    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
