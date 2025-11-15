/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:58:06 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 17:22:35 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# define CHUNKS_100 5
# define CHUNKS_500 11

typedef struct s_chunk_data
{
	int		*arr;
	size_t	len;
	size_t	min;
	size_t	max;
	size_t	chunk_size;
	size_t	*pushed;
}	t_chunk_data;

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

void				exit_error(void);
void				exit_clean_error(t_stack **a, t_stack **b);
void				free_stack(t_stack **top);
t_stack				*init_node(int value);
int					push_node(t_stack **top, int value);
void				pop_node(t_stack **top);
int					contains_only_digits(char *argv);
int					check_input(char *argv);
int					check_duplicates(t_stack *top_a, int number);
t_stack				*parse_input(char **argv, t_stack **top);
t_stack				*parse_string(char *arg, t_stack **top);
void				free_split(char **split);
void				pa(t_stack **to_a, t_stack **to_b);
void				pb(t_stack **to_a, t_stack **to_b);
void				reverse_rotate(t_stack **to_top);
void				rra(t_stack **to_a);
void				rrb(t_stack **to_b);
void				rrr(t_stack **to_a, t_stack **to_b);
void				rotate(t_stack **to_top);
void				ra(t_stack **to_a);
void				rb(t_stack **to_b);
void				rr(t_stack **to_a, t_stack **to_b);
void				swap_top2(t_stack **to_top);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
size_t				stack_length(t_stack *a);
int					stack_is_sorted(t_stack *a);
int					find_min(t_stack *a);
size_t				find_min_index(t_stack *a, int min_value);
void				find_min_pb(t_stack **a, t_stack **b);
int					check_top2(t_stack **a, size_t length);
void				sort_2(t_stack **a);
void				sort_3(t_stack **a);
void				sorting(t_stack **a, t_stack **b);
int					find_target_value(t_stack *a, t_stack *b);
size_t				find_index(t_stack *a, int target);
void				bring_to_top(t_stack **a, int target);
void				stack_to_array(t_stack *a, int *arr, size_t len);
void				insertion_sort(int *arr, size_t len);
int					find_max(t_stack *b);
size_t				find_value_index(t_stack *s, int value);
void				push_chunks(t_stack **a, t_stack **b, int *arr,
						size_t chunk_size);
void				rotate_b_to_max(t_stack **b, size_t idx, size_t b_len);
void				push_back_sorted(t_stack **a, t_stack **b);
void				turk_sort(t_stack **a, t_stack **b);

#endif
