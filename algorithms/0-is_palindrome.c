#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to a pointer to the first node
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head;
    int buffer[10240]; /* stack */
    int top = 0, i;

    if (!head || !*head)
        return (1);

    while (fast && fast->next)
    {
        buffer[top++] = slow->n;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast)
        slow = slow->next;

    i = top - 1;
    while (slow)
    {
        if (slow->n != buffer[i--])
            return (0);
        slow = slow->next;
    }

    return (1);
}
