/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:31 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/04 16:22:25 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	sa(t_stack **a)
{
	t_stack	*old_node_1;
	t_stack	*old_node_2;
	t_stack	*node_3;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	old_node_1 = *a;
	old_node_2 = old_node_1->next;
	node_3 = old_node_2->next;
	*a = old_node_2;
	old_node_2->next = old_node_1;
	old_node_1->next = node_3;
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack **b);
{
	t_stack	*old_node_1;
	t_stack	*old_node_2;
	t_stack	*node_3;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	old_node_1 = *b;
	old_node_2 = old_node_1->next;
	node_3 = old_node_2->next;
	*b = old_node_2;
	old_node_2->next = old_node_1;
	old_node_1->next = node_3;
	ft_printf("sb\n");
	return ;
}

void	ss(t_stack **a, t_stack **b)
{
	if (*a == NULL || (*a)->next == NULL 
		|| *b == NULL || (*b)->next == NULL)
		return ;
	sa(a);
	sb(b);
	// will print too many times
	ft_printf("ss\n");
	return ;
}
