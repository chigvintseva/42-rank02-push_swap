#include "push_swap.h"

int	find_max(t_stack *b)
{
	int	max;

	max = b->value;
	while (b)
	{
		if (b->value > max)
			max = b->value;
		b = b->next;
	}
	return (max);
}

size_t	find_value_index(t_stack *s, int value)
{
	size_t	idx;

	idx = 0;
	while (s && s->value != value)
	{
		idx++;
		s = s->next;
	}
	return (idx);
}

void	push_chunk(t_stack **a, t_stack **b, int *arr, size_t len, size_t min,
		size_t max, size_t *pushed)
{
	size_t	i;
	size_t	orig_len;

	i = 0;
	orig_len = stack_length(*a);
	while (i < orig_len && *pushed < len)
	{
		if ((*a)->value >= arr[min] && (*a)->value <= arr[max])
		{
			pb(a, b);
			(*pushed)++;
			if (*b && (*b)->next && (*b)->value < arr[len / 2])
				rb(b);
		}
		else
			ra(a);
		i++;
	}
}

void	push_chunks(t_stack **a, t_stack **b, int *arr, size_t len,
		size_t chunk_size)
{
	size_t	chunk;
	size_t	pushed;
	size_t	min;
	size_t	max;

	chunk = 1;
	pushed = 0;
	while (pushed < len && *a)
	{
		min = (chunk - 1) * chunk_size;
		max = chunk * chunk_size - 1;
		if (max >= len)
			max = len - 1;
		push_chunk(a, b, arr, len, min, max, &pushed);
		chunk++;
	}
}

void	rotate_b_to_max(t_stack **b, size_t idx, size_t b_len)
{
	if (idx <= b_len / 2)
	{
		while (idx > 0)
		{
			rb(b);
			idx--;
		}
	}
	else
	{
		idx = b_len - idx;
		while (idx > 0)
		{
			rrb(b);
			idx--;
		}
	}
}
