/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:42:10 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/29 17:51:36 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

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
	if (*top == NULL)
		return ;
	*top = **top->next;
	free(*top);
}

void	push_node(t_stack **top, int value)
{
	t_stack	*new_node;

	new_node = init_node(value);
	if (!new_node)
		return (NULL);
	new_node->next = *top;
	*top = new_node;
}

void	free_stack(t_stack **top)
{

	if (!(*top))
		return ;
	while (*top != NULL)
	{
		*top = **top->next;
		free(**top);
	}
}