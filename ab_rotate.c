/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:51 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/04 18:36:07 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **to_top)
{

	if (*to_top == NULL || (*to_top)->next == NULL)
		return ;

	return ;
}

void	ra(t_stack **to_a)
{
	rotate(to_a);
	ft_printf("ra\n");
	return ;
}

void	rb(t_stack **to_b)
{
	rotate(to_b);
	ft_printf("rb\n");
	return ;
}

void	rr(t_stack **to_a, t_stack **to_b)
{
	rotate(to_a);
	rotate(to_b);
	ft_printf("rr\n");
	return ;
}
