#include <stdlib.h>

typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

void free_list(list_t *head) {
    while (head != NULL) {
        list_t *temp = head;  // Save the current node
        head = head->next;    // Move to the next node
        free(temp->str);      // Free the string
        free(temp);           // Free the current node
    }
}
