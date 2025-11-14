/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:07 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/14 18:21:40 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

size_t	stack_length(t_stack *a)
{
	size_t	i;

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
	while (a->value != min_value && a->next != NULL)
	{
		index++;
		a = a->next;
	}
	if (a->next == NULL && a->value == min_value)
		index++;
	return (index - 1);
}

void	find_min_pb(t_stack **a, t_stack **b)
{
	size_t	index_min;
	size_t	i;
	int		min_value;
	
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
