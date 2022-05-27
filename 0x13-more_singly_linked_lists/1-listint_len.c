#include "lists.h"



/**
 *
 *  * listint_len -A function that returns the number of elements in the linked list
 *
 *   * @h: The head of a list
 *
 *    * Return: Returns the number of nodes
 *
 *     */



size_t listint_len(const listint_t *h)

{

size_t nnodes = 0;



while (h != NULL)

{

h = h->next;
nnodes++;
										
return (nnodes);

}
