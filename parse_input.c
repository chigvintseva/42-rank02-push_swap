/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:03:15 by achigvin          #+#    #+#             */
/*   Updated: 2025/09/19 17:53:43 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	contains_only_digits(char *argv)
{
	size_t = i;

	i = 0;
	if (argv[i] == '-')
		i++;
	while (argv[i])
	{
		if (argv[i] < '0' && argv[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

int	check_input(char *argv)
{
	size_t	i;
	long	number;
	
	i = 0;
	while (argv[i] != '\0')
	{
		if (contains_only_digits(argv) == -1)
			return (-1);
		number = ft_atol(argv[i]);
		if (number > INT_MAX || number < INT_MIN)
			return (-1);
		k++;
	}
	return (0);
}

t_stack	*parse_input(char **argv, t_stack *head)
{
	size_t	i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (check_input(argv[i]) == -1)
			return (NULL);
		if (!(add_node(head, argv[i])))
			return (free_stack(head), NULL);
		i++;
	}
	return (head);
}
