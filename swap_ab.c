/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:31 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/30 18:40:02 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	sa(t_stack *a, t_stack *b)
{
	t_stack	*a_top_old;
	t_stack	*b_top_old;

	if (b == NULL || a == NULL 
		|| (*a)->next == NULL || (*b)->next == NULL)
		return ;
	a = a_top_old;
	b = b_top_old;
	a = b_top_old;
	b = a_top_old;
	a->next = a_top_old->next;
	b->next = b_top_old->next;
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack *a, t_stack *b)
{
	t_stack	*a_top_old;
	t_stack	*b_top_old;

	if (b == NULL || a == NULL 
		|| (*a)->next == NULL || (*b)->next == NULL)
		return ;
	a = a_top_old;
	b = b_top_old;
	a = b_top_old;
	b = a_top_old;
	a->next = a_top_old->next;
	b->next = b_top_old->next;
	ft_printf("sb\n");
	return ;
}