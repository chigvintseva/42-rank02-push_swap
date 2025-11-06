/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:42:10 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/04 16:34:24 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_node(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->value = value;
	return (new);
}

void	pop_node(t_stack **top)
{
	t_stack	*temp;

	if (*top == NULL)
		return ;
	temp = *top;
	*top = (*top)->next;
	free(temp);
}

int	push_node(t_stack **top, int value)
{
	t_stack	*new_node;

	new_node = init_node(value);
	if (!new_node)
		return (1);
	new_node->next = *top;
	*top = new_node;
	return (0);
}

void	free_stack(t_stack **top)
{
	t_stack	*temp;

	while (*top != NULL)
	{
		temp = *top;
		*top = (*top)->next;
		free(temp);
	}
}

t_stack	*pre_last_node(t_stack *node)
{
	while (node->next->next != NULL)
		node = node->next;
	return (node);
}