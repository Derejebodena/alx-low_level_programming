#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cy = *head;
	unsigned int node;

	if (cy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cy);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (cy->next == NULL)
			return (-1);
		cy = cy->next;
	}
	tmp = cy->next;
	cy->next = tmp->next;
	free(tmp);
	return (1);
}
