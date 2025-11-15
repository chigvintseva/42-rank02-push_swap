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
