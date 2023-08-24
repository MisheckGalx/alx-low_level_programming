0x12. C - Singly linked lists
0x12. C - Singly linked lists


README.md


 - Singly linked lists


Tests ✔️

* Tests: This Directory is for tests purposes.


Header File 📁

* lists.h: Header file containing definitions and prototypes for all types and functions written for the project.

Type/File        Definition/Prototype

* struct list_s                •        char *str

* unsigned int len

* struct list_s *next

typedef list_t        struct list_s

0-print_list.c        size_t print_list(const list_t *h);

1-list_len.c        size_t list_len(const list_t *h);

2-add_node.c        list_t *add_node(list_t **head, const char *str);

3-add_node_end.c        list_t *add_node_end(list_t **head, const char *str);

4-free_list.c        void free_list(list_t *head)


Tasks 📃

* 0. Print list

    * 0-print_list.c: C function that prints all the elements of a list_t list.

        * If str is NULL, the function prints [0] (nil).

* 1. List length

    * 1-list_len.c: C function that returns the number of elements in a linked list_t list.

* 2. Add node

    * 2-add_node.c: C function that adds a new node at the beginning a of a list_t list.

        * If the function fails - returns NULL.

        * Otherwise - returns the address of the new element.

* 3. Add node at the end

    * 3-add_node_end.c: C function that adds a new node at the end of a linked list_t list.

        * If the function fails - returns NULL.

        * Otherwise - returns the address of the new element.

* 4. Free list

    * 4-free_list.c: C function that frees a list_t list.

* 5. The Hare and the Tortoise

    * 100-first.c: C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

* 6. Real programmers can write assembly code in any language

    * 101-hello_holberton.asm: 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function witout interrupts.



































lists.h


#ifndef LISTS_H

#define LISTS_H


/**

 * struct list_s - singly linked list

 * @str: string - (malloc'ed string)

 * @len: length of the string

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 * for Holberton project

 */

typedef struct list_s

{

        char *str;

        unsigned int len;

        struct list_s *next;

} list_t;


size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);


#endif













0-print_list.c


#include <stdio.h>

#include "lists.h"


/**

 * print_list - prints all the elements of a linked list

 * @h: pointer to the list_t list to print

 *

 * Return: the number of nodes printed

 */

size_t print_list(const list_t *h)

{

        size_t s = 0;


        while (h)

        {

                if (!h->str)

                        printf("[0] (nil)\n");

                else

                        printf("[%u] %s\n", h->len, h->str);

                h = h->next;

                s++;

        }


        return (s);

}














1-list_len.c


#include <stdlib.h>

#include "lists.h"


/**

 * list_len - returns the number of elements in a linked list

 * @h: pointer to the list_t list

 *

 * Return: number of elements in h

 */

size_t list_len(const list_t *h)

{

        size_t n = 0;


        while (h)

        {

                n++;

                h = h->next;

        }

        return (n);

}



















2-add_node.c


#include <stdlib.h>

#include <string.h>

#include "lists.h"


/**

 * add_node - adds a new node at the beginning of a linked list

 * @head: double pointer to the list_t list

 * @str: new string to add in the node

 *

 * Return: the address of the new element, or NULL if it fails

 */

list_t *add_node(list_t **head, const char *str)

{

        list_t *new;

        unsigned int len = 0;


        while (str[len])

                len++;


        new = malloc(sizeof(list_t));

        if (!new)

                return (NULL);


        new->str = strdup(str);

        new->len = len;

        new->next = (*head);

        (*head) = new;


        return (*head);

}
