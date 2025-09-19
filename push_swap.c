/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:58:01 by achigvin          #+#    #+#             */
/*   Updated: 2025/09/19 17:47:59 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1)
		return (write(2, "Error\n", 7), 0);
	a = parse_input(argv[i], a);
	if (a == NULL)
		return (write(2, "Error\n", 7), 0);
	
	
	return (0);
}