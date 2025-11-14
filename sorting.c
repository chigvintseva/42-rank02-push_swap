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

void	sorting(t_stack **a, t_stack **b)
{
	size_t	length;

	length = stack_length(*a);
	if (length == 1 || stack_is_sorted(*a))
		return ;
	else if (length == 2)
		sort_2(a);
	else if (length == 3)
		sort_3(a);
	else if (length == 4)
		sort_4(a, b);
	else if (length == 5)
		sort_5(a, b);
	else
		turk_sort(a, b);
	return ;
}
