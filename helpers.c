/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:07 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 17:42:07 by achigvin         ###   ########.fr       */
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
	size_t	index;
	size_t	length;

	length = stack_length(a);
	index = 0;
	while (a->next != NULL && (a->value < a->next->value))
	{
		index++;
		a = a->next;
	}
	if (a->next == NULL)
		index++;
	if (index == length)
		return (1);
	return (0);
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

	index_min = find_min_index(*a, find_min(*a));
	i = 0;
	ft_printf("index of min is: %d\n", index_min);
	while (i < index_min)
	{
		ra(a);
		i++;
	}
	pb(a, b);
}
