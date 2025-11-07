/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:35:44 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/04 16:32:10 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if ((*a)->value < ((*a)->next->value))
		sa(a);
}

void	sort_3(t_stack **a)
{

}

void	sort_4(t_stack **a)
{

}

void	sort_5(t_stack **a)
{

}

void	sorting(t_stack **a, t_stack **b)
{
	size_t	length;

	length = stack_length(&a);
	if (length == 1)
		return ;
	else if (length == 2)
		sort_2(a);
	else if (length == 3)
		sort_3(a);
	else if (length == 4)
		sort_4(a);
	else if (length == 5)
		sort_5(a);
	else
		_sort(a, b);
	return ;
}