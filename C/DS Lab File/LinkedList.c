#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertBeg(int val) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = val;
    n->next = head;
    head = n;
}
void insertEnd(int val) {
    struct Node *n = malloc(sizeof(struct Node)), *t = head;
    n->data = val; n->next = NULL;
    if (!head) head = n;
    else { while (t->next) t = t->next; t->next = n; }
}
void insertAfter(int key, int val) {
    struct Node *t = head;
    while (t && t->data != key) t = t->next;
    if (!t) printf("Node not found\n");
    else {
        struct Node *n = malloc(sizeof(struct Node));
        n->data = val; n->next = t->next; t->next = n;
    }
}
void delBeg() {
    if (!head) printf("List empty\n");
    else { struct Node *t = head; head = head->next; free(t); }
}
void delEnd() {
    if (!head) printf("List empty\n");
    else if (!head->next) { free(head); head = NULL; }
    else {
        struct Node *t = head, *p = NULL;
        while (t->next) { p = t; t = t->next; }
        p->next = NULL; free(t);
    }
}
void delVal(int key) {
    struct Node *t = head, *p = NULL;
    while (t && t->data != key) { p = t; t = t->next; }
    if (!t) printf("Node not found\n");
    else {
        if (!p) head = t->next;
        else p->next = t->next;
        free(t);
    }
}
void display() {
    struct Node *t = head;
    if (!t) printf("List empty\n");
    else {
        printf("List: ");
        while (t) { printf("%d ", t->data); t = t->next; }
        printf("\n");
    }
}
int main() {
    int ch, val, key;
    while (1) {
        printf("\n1.InsertBeg 2.InsertEnd 3.InsertAfter 4.DelBeg 5.DelEnd 6.DelVal 7.Display 8.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: scanf("%d", &val); insertBeg(val); break;
            case 2: scanf("%d", &val); insertEnd(val); break;
            case 3: scanf("%d%d", &key, &val); insertAfter(key, val); break;
            case 4: delBeg(); break;
            case 5: delEnd(); break;
            case 6: scanf("%d", &key); delVal(key); break;
            case 7: display(); break;
            case 8: return 0;
            default: printf("Invalid\n");
        }
    }
}