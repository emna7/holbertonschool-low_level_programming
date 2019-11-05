#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: the address of the new node, NULL otherwise
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
unsigned int i = 0;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
}
