/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:58:06 by achigvin          #+#    #+#             */
/*   Updated: 2025/10/29 18:08:54 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct	s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

//stak init free functions
t_stack	*init_node(int value);
void	pop_node(t_stack **top);
void	push_node(t_stack **top, int value);
void	free_stack(t_stack **top);

//parse input file
int		contains_only_digits(char *argv);
int		check_input(char *argv);
t_stack	*parse_input(char **argv, t_stack **top);

// swap helpers
void	swap_top2(t_stack **to_top);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
// push helpers
void	pa(t_stack **to_a, t_stack **to_b);
void	pb(t_stack **to_a, t_stack **to_b);
// rotate helpers
t_stack	*find_prelast(t_stack *node);
void	rotate(t_stack **to_top);
void	ra(t_stack **to_a);
void	rb(t_stack **to_b);
void	rr(t_stack **to_a, t_stack **to_b);
// reverse rotate helpers
void	reverse_rotate(**to_top);
void	rra(t_stack **to_a);
void	rrb(t_stack **to_b);
void	rrr(t_stack **to_a, t_stack **to_b)

#endif