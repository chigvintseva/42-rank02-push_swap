/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:58:01 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/29 18:07:00 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (write(2, "Error\n", 7), 0);
	a = parse_input(argv, a);
	if (!a)
		return (write(2, "Error\n", 7), 0);

	// r pointers repeated in calls? like will they change aning or should i start sending double ptrs to not mess up with them?
	return (0);
}