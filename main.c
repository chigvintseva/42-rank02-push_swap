/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:58:01 by achigvin          #+#    #+#             */
/*   Updated: 2025/09/19 17:59:38 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (write(2, "Error\n", 7), 0);
	a = parse_input(argv, a);
	if (a == NULL)
		return (write(2, "Error\n", 7), 0);
	b = init_stack(stack_len(a), b);
	// is stack b initialised separately using length of stack a? 
	// r pointers repeated in calls? like will they change aning or should i start sending double ptrs to not mess up with them?
	return (0);
}