#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert_end() {
    struct Node *n, *t;
    n = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter The Data: ");
    scanf("%d", &n->data);
    n->next = NULL;

    if (head == NULL) {
        head = n;
    } else {
        t = head;
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = n;
    }
}

void insert_front() {
    struct Node *n;
    n = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data: ");
    scanf("%d", &n->data);

    n->next = head;
    head = n;
}

void display() {
    struct Node *t;
    if (head == NULL) {
        printf("List is Empty.");
    } else {
        t = head;
        while (t != NULL) {
            printf("%d ", t->data);
            t = t->next;
        }
    }
}

void delete_end() {
    struct Node *p, *q;

    if (head == NULL) {
        printf("List is empty\n");
    }
    else if (head->next == NULL) {
        free(head);
        head = NULL;
    }
    else {
        p = head;
        q = head->next;
        while (q->next != NULL) {
            p = q;
            q = q->next;
        }
        p->next = NULL;
        free(q);
    }
}

void delete_front() {
    struct Node *p;
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        p = head;
        head = head->next;
        free(p);
    }
}

int main() {
    int ch;
    do {
        printf("\n1.Insert End\n2.Insert Front\n3.Display\n4.Delete End\n5.Delete Front\n6.Exit\n");
        printf("Enter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: insert_end(); break;
            case 2: insert_front(); break;
            case 3: display(); break;
            case 4: delete_end(); break;
            case 5: delete_front(); break;
            default: printf("Invalid choice");
        }
    } while (1);
}

