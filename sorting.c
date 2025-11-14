/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:35:44 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 21:35:33 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_top2(t_stack **a, size_t length)
{
	t_stack	*top;

	ft_printf("sort check 2\n");
	if (length < 3)
		return (0);
	top = *a;
	top = top->next->next;
	if (!stack_is_sorted(top))
		return (0);
	sort_2(a);
	if (stack_is_sorted(*a))
		return (1);
	return (0);
}

void	sorting(t_stack **a, t_stack **b)
{
	size_t	length;

	length = stack_length(*a);
	if (length == 1 || stack_is_sorted(*a) || check_top2(a, length))
		return ;
	if (length == 2)
		sort_2(a);
	else if (length == 3)
		sort_3(a);
	else if (length == 4)
		sort_4(a, b);
	else if (length == 5)
		sort_5(a, b);
	else if (length > 5)
		turk_sort(a, b);
	return ;
}
