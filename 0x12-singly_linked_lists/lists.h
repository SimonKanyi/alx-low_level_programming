#ifndef LISTS_H
#define LISTS_H

/* Other necessary includes */

/**
 * struct list_s - Linked list structure
 * @str: String (data)
 * @len: Length of the string
 * @next: Pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

/* Other function prototypes, if any */

#endif /* LISTS_H */
