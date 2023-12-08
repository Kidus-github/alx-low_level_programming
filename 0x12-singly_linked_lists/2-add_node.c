#include <stdlib.h>
#include <string.h>

typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

list_t *add_node(list_t **head, const char *str) {
    if (head == NULL || str == NULL) {
        return NULL;  // Invalid input parameters
    }

    // Allocate memory for the new node
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;  // Memory allocation failed
    }

    // Duplicate the input string using strdup
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return NULL;  // String duplication failed
    }

    // Set the next pointer of the new node to the current head
    new_node->next = *head;

    // Update the head to point to the new node
    *head = new_node;

    return new_node;  // Return the address of the new element
}
