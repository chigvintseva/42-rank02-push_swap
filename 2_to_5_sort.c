
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
	size_t	index_min;
	size_t	i;

	index_min = find_min_index(*a, find_min(*a));
	i = 0;
	while (i < index_min)
	{
		ra(a);
		i++;
	}
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	size_t	i_min;
	size_t	i;
	int		k;

	k = 0;
	while (k < 2)
	{
		i_min = find_min_index(*a, find_min(*a));
		i = 0;
		while (i < i_min)
		{
			ra(a);
			i++;
		}
		pb(a, b);
		k++;
	}
	sort_3;
	pa(a, b);
	pa(a, b);
}
