#include "monty.h"

/**
* f_push - function that adds node to the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int i, m = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			m++;
		for (; bus.arg[m] != '\0'; m++)
		{
			if (bus.arg[m] > 57 || bus.arg[m] < 48)
				flag = 1; }

