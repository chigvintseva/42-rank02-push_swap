/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:41 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/04 16:35:08 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **to_a, t_stack **to_b)
{
	t_stack	*a_first_old;

	if (*to_b == NULL)
		return ;
	a_first_old = *to_a;
	*to_a = *to_b;
	*to_b = (*to_a)->next;
	(*to_a)->next = a_first_old;
	ft_printf("pa\n");
	return ;
}

void	pb(t_stack **to_a, t_stack **to_b)
{
	t_stack	*b_first_old;

	if (*to_a == NULL)
		return ;
	b_first_old = *to_b;
	*to_b = *to_a;
	*to_a = (*to_a)->next;
	(*to_b)->next = b_first_old;
	ft_printf("pb\n");
	return ;
}
