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

int	find_target_value(t_stack *a, t_stack *b)
{
	int		target;
	int		b_value;
	t_stack	*temp;

	if (!a || !b)
		exit_clean_error(&a, &b);
	temp = a;
	target = INT_MAX;
	b_value = b->value;
	while (temp != NULL)
	{
		if (temp->value >= b_value && temp->value < target)
			target = temp->value;
		temp = temp->next;
	}
	if (target == INT_MAX)
		target = find_min(a);
	return (target);
}

size_t	find_index(t_stack *a, int target)
{
	size_t	index;

	index = 0;
	while (a != NULL && a->value != target)
	{
		index++;
		a = a->next;
	}
	return (index);
}

void	bring_to_top(t_stack **a, int target)
{
	size_t	index;
	size_t	length;

	index = find_index(*a, target);
	length = stack_length(*a);
	if (index <= (length / 2))
	{
		while (index > 0)
		{
			ra(a);
			index--;
		}
	}
	else
	{
		while (index < length)
		{
			rra(a);
			index++;
		}
	}
}

void stack_to_array(t_stack *a, int *arr, size_t len)
{
	size_t i = 0;
	while (a && i < len)
	{
		arr[i] = a->value;
		i++;
		a = a->next;
	}
}

void insertion_sort(int *arr, size_t len)
{
	size_t i = 1;
	while (i < len)
	{
		int key = arr[i];
		size_t j = i;
		while (j > 0 && arr[j - 1] > key)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = key;
		i++;
	}
}

int find_max(t_stack *b)
{
	int max = b->value;
	while (b)
	{
		if (b->value > max)
			max = b->value;
		b = b->next;
	}
	return max;
}

size_t find_value_index(t_stack *s, int value)
{
	size_t idx = 0;
	while (s && s->value != value)
	{
		idx++;
		s = s->next;
	}
	return idx;
}


void push_chunk(t_stack **a, t_stack **b, int *arr, size_t len, size_t min, size_t max, size_t *pushed)
{
	size_t i = 0;
	size_t orig_len = stack_length(*a);
	while (i < orig_len && *pushed < len)
	{
		if ((*a)->value >= arr[min] && (*a)->value <= arr[max])
		{
			pb(a, b);
			(*pushed)++;
			if (*b && (*b)->next && (*b)->value < arr[len / 2])
				rb(b);
		}
		else
			ra(a);
		i++;
	}
}

void push_chunks(t_stack **a, t_stack **b, int *arr, size_t len, size_t chunk_size)
{
	size_t chunk = 1;
	size_t pushed = 0;
	while (pushed < len && *a)
	{
		size_t min = (chunk - 1) * chunk_size;
		size_t max = chunk * chunk_size - 1;
		if (max >= len)
			max = len - 1;
		push_chunk(a, b, arr, len, min, max, &pushed);
		chunk++;
	}
}

void rotate_b_to_max(t_stack **b, size_t idx, size_t b_len)
{
	if (idx <= b_len / 2)
	{
		while (idx > 0)
		{
			rb(b);
			idx--;
		}
	}
	else
	{
		idx = b_len - idx;
		while (idx > 0)
		{
			rrb(b);
			idx--;
		}
	}
}

void push_back_sorted(t_stack **a, t_stack **b)
{
	while (*b)
	{
		int max = find_max(*b);
		size_t idx = find_value_index(*b, max);
		size_t b_len = stack_length(*b);
		rotate_b_to_max(b, idx, b_len);
		pa(a, b);
	}
}


void turk_sort(t_stack **a, t_stack **b)
{
	size_t len = stack_length(*a);
	int arr[500];
	size_t chunks;
	size_t chunk_size;
	if (len <= 3)
	{
		sort_3(a);
		return;
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
	push_chunks(a, b, arr, len, chunk_size);
	push_back_sorted(a, b);
	bring_to_top(a, find_min(*a));
}
