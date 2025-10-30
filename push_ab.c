/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:41 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/30 18:34:23 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	pa(t_stack *a, t_stack *b)
{
	t_stack	*b_top_old;
	t_stack	*a_top_old;

	if (b == NULL)
		return ;
	b_top_old = b;
	a_top_old = a;
	b = b->next;
	a = b_top_old;
	b_top_old->next = a_top_old->next;
	ft_printf("pa\n");
	return ;
}

void	pb(t_stack *a, t_stack *b)
{
	t_stack	*a_top_old;
	t_stack	*b_top_old;

	if (a == NULL)
		return ;
	a_top_old = a;
	b_top_old = b;
	b = a_top_old;
	a_top_old->next = b_top_old->next;
	a = a->next;
	ft_printf("pb\n");
	return ;
}
