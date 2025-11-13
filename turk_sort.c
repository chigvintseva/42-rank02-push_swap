/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:09 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 17:42:09 by achigvin         ###   ########.fr       */
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

void	turk_sort(t_stack **a, t_stack **b)
{
	size_t	length
	int		target;

	length = stack_length(*a);
	while (length-- > 3)
		pb(a, b);
	sort_3(a);
	length = stack_length(*b);
	while (length-- > 1)
	{
		target = find_target_value(*a);

	}
	return ;
}
