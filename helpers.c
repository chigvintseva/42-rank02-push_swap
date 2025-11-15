/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:07 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 14:10:47 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	stack_length(t_stack *a)
{
	size_t	i;

	if (!a)
		return (0);
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
	if (!a)
		return (1);
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
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
	while (a && (a->value != min_value))
	{
		index++;
		a = a->next;
	}
	return (index);
}

void	find_min_pb(t_stack **a, t_stack **b)
{
	size_t	index_min;
	size_t	i;
	int		min_value;

	if (!a || !*a)
		return ;
	min_value = find_min(*a);
	index_min = find_min_index(*a, min_value);
	i = 0;
	while (i < index_min)
	{
		ra(a);
		i++;
	}
	pb(a, b);
}
