/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:03:15 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 21:34:24 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	contains_only_digits(char *argv)
{
	size_t	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	if (!argv[i])
		return (0);
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_input(char *argv)
{
	long	number;

	if (contains_only_digits(argv) == 0)
		return (0);
	if (ft_strlen(argv) > 11)
		return (0);
	number = ft_atol(argv);
	if (number > INT_MAX || number < INT_MIN)
		return (0);
	return (1);
}

t_stack	*parse_input(char **argv, t_stack **top)
{
	size_t	i;
	int		value;

	i = 1;
	while (argv[i] != NULL)
		i++;
	i--;
	while (i > 0)
	{
		if (check_input(argv[i]) == 0)
			return (free_stack(top), NULL);
		value = ft_atoi(argv[i]);
		if (push_node(top, value) == 0)
			return (free_stack(top), NULL);
		i--;
	}
	return (*top);
}
