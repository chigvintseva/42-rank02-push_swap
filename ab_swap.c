/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:31 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 14:10:13 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top2(t_stack **to_top)
{
	t_stack	*old_node_1;
	t_stack	*old_node_2;
	t_stack	*node_3;

	if (!to_top || !*to_top || !(*to_top)->next)
		return ;
	old_node_1 = *to_top;
	old_node_2 = old_node_1->next;
	node_3 = old_node_2->next;
	*to_top = old_node_2;
	old_node_2->next = old_node_1;
	old_node_1->next = node_3;
}

void	sa(t_stack **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return ;
	swap_top2(a);
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	swap_top2(b);
	ft_printf("sb\n");
	return ;
}

void	ss(t_stack **a, t_stack **b)
{
	int	did_anything;

	did_anything = 0;
	if (a && *a && (*a)->next)
	{
		swap_top2(a);
		did_anything = 1;
	}
	if (b && *b && (*b)->next)
	{
		swap_top2(b);
		did_anything = 1;
	}
	if (did_anything)
		ft_printf("ss\n");
}
