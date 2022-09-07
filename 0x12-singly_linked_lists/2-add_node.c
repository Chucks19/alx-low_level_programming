#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
       list_t *new;
       int count = 0;
       int i = 0;

       new = malloc(sizeof(list_t));
       if (new == NULL)
              return (NULL);

       new->str = strdup(str);

       while (new[i] != '\0')
       {
              count++;
              i++;
       }    
       new->len = count;
       new->next = *head;
       *head = new;

       return (*head);
}