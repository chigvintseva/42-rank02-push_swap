/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_to_5_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:33:56 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 21:33:53 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return;
	if ((*a)->value > ((*a)->next->value))
		sa(a);
}

void	sort_3(t_stack **a)
{
	int	v1;
	int	v2;
	int	v3;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
    	return;
	v1 = (*a)->value;
	v2 = (*a)->next->value;
	v3 = (*a)->next->next->value;
	if (v1 < v2 && v2 > v3 && v1 > v3)
		rra(a);
	else if (v1 < v2 && v2 > v3 && v1 < v3)
	{
		sa(a);
		ra(a);
	}
	else if (v1 > v2 && v2 < v3 && v3 > v1)
		sa(a);
	else if (v1 > v2 && v2 < v3 && v1 > v3)
		ra(a);
	else if (v1 > v2 && v2 > v3)
	{
		ra(a);
		sa(a);
	}
}
