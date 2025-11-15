/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:09 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/15 17:25:39 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back_sorted(t_stack **a, t_stack **b)
{
	int		max;
	size_t	idx;
	size_t	b_len;

	while (*b)
	{
		max = find_max(*b);
		idx = find_value_index(*b, max);
		b_len = stack_length(*b);
		rotate_b_to_max(b, idx, b_len);
		pa(a, b);
	}
}

void	turk_sort(t_stack **a, t_stack **b)
{
	size_t	len;
	int		arr[500];
	size_t	chunks;
	size_t	chunk_size;

	len = stack_length(*a);
	if (len <= 3)
	{
		sort_3(a);
		return ;
	}
	stack_to_array(*a, arr, len);
	insertion_sort(arr, len);
	if (len <= 100)
		chunks = CHUNKS_100;
	else
		chunks = CHUNKS_500;
	chunk_size = len / chunks;
	if (len % chunks != 0)
		chunk_size++;
	push_chunks(a, b, arr, chunk_size);
	push_back_sorted(a, b);
	bring_to_top(a, find_min(*a));
}
