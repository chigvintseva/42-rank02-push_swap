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
	else if (length == 5 || length == 4)
		sort_4_5(a);
	else
		turk_sort(a, b);
	return ;
}