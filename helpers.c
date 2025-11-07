
#include "push_swap.h"

size_t	stack_length(t_stack *a)
{
	size_t	i;

	i = 1;
	while (a->next != NULL)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	stack_is_sorted(t_stack *a)
{
	size_t	index;
	size_t	length;

	length = stack_length(a);
	index = 0;
	while (a->next != NULL && (a->value < a->next->value))
	{
		index++;
		a = a->next;
	}
	if (a->next == NULL)
		index++;
	if (index == length)
		return (1);
	return (0);
}

int	find_min(t_stack *a)
{
	int	number;

	number = a->value;
	while (a->next != NULL)
	{
		if (a->value < number)
			number = a->value;
		a = a->next;
	}
	if (a->value < number)
		number = a->value;
	return (number);
}

size_t	find_min_index(t_stack *a, int min_value)
{
	size_t	index;

	index = 0;
	while (a->value != min_value && a->next != NULL)
	{
		index++;
		a = a->next;
	}
	if (a->next == NULL && a->value == min_value)
		index++;
	return (index);
}

