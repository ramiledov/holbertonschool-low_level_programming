#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list node
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node for Holberton/ALX projects
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - returns the number of elements in a linked list_t
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h);

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node pointer
 * @str: string to be duplicated in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node pointer
 * @str: string to be duplicated in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head);

#endif /* LISTS_H */

