/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:32:29 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 14:50:44 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	size_t	i;

	if (!split)
		return ;
	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

t_stack	*parse_string(char *arg, t_stack **top)
{
	size_t	i;
	int		value;
	char	**split;

	split = ft_split(arg, ' ');
	if (!split)
		return (free_stack(top), NULL);
	i = 0;
	while (split[i] != NULL)
		i++;
	if (i == 0)
		return (free_split(split), free_stack(top), NULL);
	while (i > 0)
	{
		i--;
		if (ft_strlen(split[i]) == 0 || check_input(split[i]) == 0)
			return (free_split(split), free_stack(top), NULL);
		value = ft_atoi(split[i]);
		if (push_node(top, value) == 0)
			return (free_split(split), free_stack(top), NULL);
	}
	free_split(split);
	return (*top);
}
