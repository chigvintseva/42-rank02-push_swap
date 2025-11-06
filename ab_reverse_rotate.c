/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_ab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:28:08 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/30 17:28:09 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

{
	t_stack	*old_last;
	t_stack	*old_pre_last;

	if (*to_top == NULL || (*to_top)->next == NULL)
		return ;
	old_pre_last = find_prelast(*top);
	old_last = old_pre_last->next;
	
	return ;
}