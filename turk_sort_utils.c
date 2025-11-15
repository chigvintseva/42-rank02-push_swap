#include "push_swap.h"

int	find_target_value(t_stack *a, t_stack *b)
{
	int		target;
	int		b_value;
	t_stack	*temp;

	if (!a || !b)
		exit_clean_error(&a, &b);
	temp = a;
	target = INT_MAX;
	b_value = b->value;
	while (temp != NULL)
	{
		if (temp->value >= b_value && temp->value < target)
			target = temp->value;
		temp = temp->next;
	}
	if (target == INT_MAX)
		target = find_min(a);
	return (target);
}

size_t	find_index(t_stack *a, int target)
{
	size_t	index;

	index = 0;
	while (a != NULL && a->value != target)
	{
		index++;
		a = a->next;
	}
	return (index);
}

void	bring_to_top(t_stack **a, int target)
{
	size_t	index;
	size_t	length;

	index = find_index(*a, target);
	length = stack_length(*a);
	if (index <= (length / 2))
	{
		while (index > 0)
		{
			ra(a);
			index--;
		}
	}
	else
	{
		while (index < length)
		{
			rra(a);
			index++;
		}
	}
}

void	stack_to_array(t_stack *a, int *arr, size_t len)
{
	size_t	i;

	i = 0;
	while (a && i < len)
	{
		arr[i] = a->value;
		i++;
		a = a->next;
	}
}

void	insertion_sort(int *arr, size_t len)
{
	size_t	i;
	int		key;
	size_t	j;

	i = 1;
	while (i < len)
	{
		key = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > key)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = key;
		i++;
	}
}
