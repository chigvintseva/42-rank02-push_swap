/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_2_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:33:56 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 14:12:36 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	if ((*a)->value > ((*a)->next->value))
		sa(a);
}

void	sort_3(t_stack **a)
{
	int	v1;
	int	v2;
	int	v3;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
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

static void	rotate_min_to_top(t_stack **a, size_t pos, size_t size)
{
	if (pos <= size / 2)
	{
		while (pos--)
			ra(a);
	}
	else
	{
		pos = size - pos;
		while (pos--)
			rra(a);
	}
}

void	sort_5(t_stack **a, t_stack **b)
{
	size_t	pos;
	size_t	size;
	int		min_val;

	size = stack_length(*a);
	while (size > 3)
	{
		min_val = find_min(*a);
		pos = find_min_index(*a, min_val);
		rotate_min_to_top(a, pos, size);
		pb(a, b);
		size--;
	}
	sort_3(a);
	while (*b)
		pa(a, b);
}
