/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:42:10 by achigvin          #+#    #+#             */
/*   Updated: 2025/09/19 17:58:33 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	add_node(t_stack *head, t_stack *new)
{
	
}

size_t	stack_len(t_stack *a)
{
	size_t	i;

	i = 0;
	while (a->next != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}

t_stack	*init_stack(t_stack	*a, t_stack	*b_to_init)
{
	
}

void	free_stack(t_stack *head)
{
	
}