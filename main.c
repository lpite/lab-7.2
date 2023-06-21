// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct DoublyNode {
    char data;
    struct DoublyNode* next;
    struct DoublyNode* prev;
} DoublyNode;

int main() {
    DoublyNode* head = NULL;
    DoublyNode* head2 = NULL;
    puts("first");
    for (char i = 'a'; i <= 'z'; ++i) {
        DoublyNode* tmp = (DoublyNode*)malloc(sizeof(DoublyNode));
        tmp->data = i;
        tmp->prev = NULL;
        tmp->next = head;
        head = tmp;
        printf("%c ", i);
    }
    puts("\nsecond");

    DoublyNode* tmp = head;
    while (tmp) {
        if (tmp->data  != 'a')
        {
            if (head2)
            {
                head2->prev = tmp;
                head2 = tmp;
            }
            else {
                head2 = tmp;
            }
        printf("%c ", tmp->data);
        }
        tmp = tmp->next;
        free(tmp->prev);

    }


    return 0;
}