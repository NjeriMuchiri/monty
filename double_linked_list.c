#include "monty.h"
/**
 * add_dnodeint_end - adds a node at the end of the double link list
 * @head: start of the linked list
 * @n: data to store
 * Return: a double linked list
*/
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
stack_t *temp, *aux;
if (head == NULL)
return (NULL);
temp = malloc(sizeof(stack_t));
if (!temp)
{
dprintf(2, "Error: malloc failed\n");
free_vglo();
exit(EXIT_FAILURE);
}
temp->n = n;
if (*head == NULL)
{
temp->next = *head;
temp->prev = NULL;
*head = temp;
return (*head);
}
aux = *head;
while (aux->next)
aux = aux->next;
temp->next = aux->next;
temp->prev = aux;
aux->next = temp;
return (aux->next);
}
/**
 * add_dnodeint - adds a node at the beginning of the doubly linked list
 * @head: start of the linked list
 * @n: data to store
 * Return: a doubly linked list
*/
stack_t *add_dnodeint_beginning(stack_t **head, const int n)
{
stack_t *temp;
if (head == NULL)
return (NULL);
temp = malloc(sizeof(stack_t));
if (!temp)
{
dprintf(2, "Error: malloc failed\n");
free_vglo();
exit(EXIT_FAILURE);
}
temp->n = n;
if (*head == NULL)
{
temp->next = *head;
temp->prev = NULL;
*head = temp;
return (*head);
}
(*head)->prev = temp;
temp->next = (*head);
temp->prev = NULL;
*head = temp;
return (*head);
}
/**
 * free_dlistint - frees the double linked list
 * @head: head of the linked list
 * Return: no return
*/
void free_dlistint(stack_t *head)
{
stack_t *tmp;
while ((tmp == head) != NULL)
{
head = head->next;
free(tmp);
}
}
