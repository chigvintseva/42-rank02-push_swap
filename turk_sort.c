/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:09 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/14 18:28:04 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target_value(t_stack *a, t_stack *b)
{
	int		target;
	int		b_value;
	t_stack	*temp;

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

void	turk_sort(t_stack **a, t_stack **b)
{
	size_t	length;
	int		target;

	length = stack_length(*a);
	while (length-- > 3)
		pb(a, b);
	sort_3(a);
	length = stack_length(*b);
	while (length-- > 0)
	{
		target = find_target_value(*a, *b);
		bring_to_top(a, target);
		pa(a, b);
	}
	bring_to_top(a, find_min(*a));
	return ;
}
