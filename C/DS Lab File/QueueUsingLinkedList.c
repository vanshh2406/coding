#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *front = NULL, *rear = NULL;
void enqueue(int val) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = val;
    n->next = NULL;
    if (rear == NULL)
        front = rear = n;
    else {
        rear->next = n;
        rear = n;
    }
    printf("Inserted %d\n", val);
}
void dequeue() {
    if (front == NULL)
        printf("Queue Underflow\n");
    else {
        struct Node *t = front;
        printf("Deleted %d\n", t->data);
        front = front->next;
        if (front == NULL)
            rear = NULL;
        free(t);
    }
}
void display() {
    if (front == NULL)
        printf("Queue is empty\n");
    else {
        struct Node *t = front;
        printf("Queue elements: ");
        while (t) {
            printf("%d ", t->data);
            t = t->next;
        }
        printf("\n");
    }
}
int main() {
    int ch, val;
    while (1) {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
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