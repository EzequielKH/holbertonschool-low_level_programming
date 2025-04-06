#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Calculates the length of a string manually.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strdup_manual - Duplicates a string without using strdup.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly allocated duplicate string.
 */
char *_strdup_manual(const char *str)
{
	unsigned int len = _strlen(str);
	char *dup = malloc(sizeof(char) * (len + 1));
	unsigned int i;

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to duplicate and store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup_manual(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
