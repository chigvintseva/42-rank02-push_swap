
#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if ((*a)->value > ((*a)->next->value))
		sa(a);
}

void	sort_3(t_stack **a)
{
	int	v1;
	int	v2;
	int	v3;

	v1 = (*a)->value;
	v2 = (*a)->next->value;
	v3 = (*a)->next->next->value;
	if (v1 < v2 && v2 > v3 && v1 > v3)
		rra(a);
	else if (v1 < v2 && v2 > v3 && v1 < v3)
	{
		sa(a);
		ra(a);
	}
	else if (v1 > v2 && v2 < v3 && v3 > v1)
		sa(a);
	else if (v1 > v2 && v2 < v3 && v1 > v3)
		ra(a);
	else if (v1 > v2 && v2 > v3)
	{
		ra(a);
		sa(a);
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	find_min_pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	find_min_pb(a, b);
	find_min_pb(a, b);
	sort_3(a, b);
	pa(a, b);
	pa(a, b);
}
