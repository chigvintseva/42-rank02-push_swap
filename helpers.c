
#include "push_swap.h"

t_stack	*find_min(t_stack *a)
{
	t_stack	*node;

	node = a;
	while (a->next != NULL)
	{
		if (node->value > node->next->value)
			node = node->next;
		a = a->next;
	}
	return (node);
}
