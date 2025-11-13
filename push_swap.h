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
#include <limits.h>

typedef struct	s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	exit_error();
// stack operations
void	free_stack(t_stack **top);
t_stack	*init_node(int value);
int		push_node(t_stack **top, int value);
void	pop_node(t_stack **top);

// input
int		contains_only_digits(char *argv);
int		check_input(char *argv);
int		check_duplicates(t_stack **to_a);
t_stack	*parse_input(char **argv, t_stack **top);

// instructions
void	pa(t_stack **to_a, t_stack **to_b);
void	pb(t_stack **to_a, t_stack **to_b);
void	reverse_rotate(t_stack **to_top);
void	rra(t_stack **to_a);
void	rrb(t_stack **to_b);
void	rrr(t_stack **to_a, t_stack **to_b);
void	rotate(t_stack **to_top);
void	ra(t_stack **to_a);
void	rb(t_stack **to_b);
void	rr(t_stack **to_a, t_stack **to_b);
void	swap_top2(t_stack **to_top);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

// helpers
size_t	stack_length(t_stack *a);
int		stack_is_sorted(t_stack *a);
int		find_min(t_stack *a);
size_t	find_min_index(t_stack *a, int min_value);
void	find_min_pb(t_stack **a, t_stack **b);

// sorts
void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	sorting(t_stack **a, t_stack **b);
int		find_target_value(t_stack *a, t_stack *b);
size_t	find_index(t_stack *a, int target);
void	bring_to_top(t_stack **a);
void	turk_sort(t_stack **a, t_stack **b)

#endif