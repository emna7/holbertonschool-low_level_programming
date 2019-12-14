#include "lists.h"
/**
 * dlistint_len - returns the length of the dlistint
 * @h: head of dlistint
 * Return: number of elements in dlistint
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t listcount = 0;
while (h != NULL)
{
listcount++;
h = h->next;
}
return (listcount);
}
