/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:27:31 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/30 18:03:45 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(t_stack *a, t_stack *b)
{
	if (b == NULL || a == NULL 
		|| (*a)->next == NULL || (*b)->next == NULL)
		return ;

	
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack *a, t_stack *b)
{
	if (b == NULL || a == NULL 
		|| (*a)->next == NULL || (*b)->next == NULL)
		return ;
	
	ft_printf("sb\n");
	return ;
}