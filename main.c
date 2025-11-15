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

void	exit_error(t_stack **a, t_stack **b)
{
	if (a)
		free_stack(a);
	if (b)
		free_stack(b);
	write(2, "Error\n", 7);
	exit(EXIT_FAILURE);
}

void	ft_print_output(t_stack *a)
{
	while (a != NULL)
	{
		ft_printf("%d ", a->value);
		a = a->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	a = parse_input(argv, &a);
	if (!a)
		exit_error(&a, &b);
	sorting(&a, &b);
	ft_print_output(a);

	free_stack(&a);
	free_stack(&b);
	return (0);
}
