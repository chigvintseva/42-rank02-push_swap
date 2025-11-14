/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:09 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 21:37:15 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target_value(t_stack *a, t_stack *b)
{
	int	target;
	int	b_value;

	target = INT_MAX;
	b_value = b->value;
	while (a->next != NULL)
	{
		if (a->value > b_value && a->value < target)
			target = a->value;
		a = a->next;
	}
	if (target == INT_MAX)
		target = find_min(a);
	return (target);
}

size_t	find_index(t_stack *a, int target)
{
	size_t	index;

	index = 0;
	while (a->value != target && a != NULL)
	{
		index++;
		a = a->next;
	}
	return (index);
}

void	ft_print_output2(t_stack *a)
{
	while (a != NULL)
	{
		ft_printf("%d ", a->value);
		a = a->next;
	}
	ft_printf("\n");
}

void	bring_to_top(t_stack **a, int target)
{
	size_t	index;
	size_t	length;

	index = find_index(*a, target);
	length = stack_length(*a);
	if (index <= (length / 2))
	{
		while (index-- > 0)
			ra(a);
	}
	else
	{
		while (index++ < length)
			rra(a);
	}
	ft_printf("after brinf to the top: ");
	ft_print_output2(*a);
}

void	turk_sort(t_stack **a, t_stack **b)
{
	size_t	length;
	int		target;

	ft_printf("sort turk\n");
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
