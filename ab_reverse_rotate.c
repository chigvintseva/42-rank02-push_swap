/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:28:08 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 14:08:13 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **to_top)
{
	t_stack	*old_last;
	t_stack	*old_pre_last;

	if (*to_top == NULL || (*to_top)->next == NULL)
		return ;
	old_pre_last = *to_top;
	while (old_pre_last->next && old_pre_last->next->next)
		old_pre_last = old_pre_last->next;
	old_last = old_pre_last->next;
	old_pre_last->next = NULL;
	old_last->next = *to_top;
	*to_top = old_last;
	return ;
}

void	rra(t_stack **to_a)
{
	reverse_rotate(to_a);
	ft_printf("rra\n");
	return ;
}

void	rrb(t_stack **to_b)
{
	reverse_rotate(to_b);
	ft_printf("rrb\n");
	return ;
}

void	rrr(t_stack **to_a, t_stack **to_b)
{
	reverse_rotate(to_a);
	reverse_rotate(to_b);
	ft_printf("rrr\n");
	return ;
}
