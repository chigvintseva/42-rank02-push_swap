/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:41 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/30 18:27:43 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	pa(t_stack *a, t_stack *b)
{
	t_stack	*b_top_node;
	t_stack	*a_top_node;

	if (b == NULL)
		return ;
	b_top_node = b;
	a_top_node = a;
	b = b->next;
	a = b_top_node;
	b_top_node->next = a_top_node->next;
	ft_printf("pa\n");
	return ;
}

void	pb(t_stack *a, t_stack *b)
{
	t_stack	*a_top_node;
	t_stack	*b_top_node;

	if (a == NULL)
		return ;
	a_top_node = a;
	b_top_node = b;
	b = a_top_node;
	a_top_node->next = b_top_node->next;
	a = a->next;
	ft_printf("pb\n");
	return ;
}
