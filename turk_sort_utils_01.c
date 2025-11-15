#include "push_swap.h"

static int	is_in_chunk_range(int value, t_chunk_data *data)
{
	return (value >= data->arr[data->min] && value <= data->arr[data->max]);
}

static void	handle_value_in_chunk(t_stack **a, t_stack **b, t_chunk_data *data)
{
	pb(a, b);
	(*data->pushed)++;
	if (*b && (*b)->next && (*b)->value < data->arr[data->len / 2])
		rb(b);
}

static void	push_chunk(t_stack **a, t_stack **b, t_chunk_data *data)
{
	size_t	i;
	size_t	orig_len;

	i = 0;
	orig_len = stack_length(*a);
	while (i < orig_len && *data->pushed < data->len)
	{
		if (is_in_chunk_range((*a)->value, data))
			handle_value_in_chunk(a, b, data);
		else
			ra(a);
		i++;
	}
}

void	push_chunks(t_stack **a, t_stack **b, int *arr, size_t chunk_size)
{
	size_t			chunk;
	size_t			pushed;
	size_t			len;
	t_chunk_data	data;

	len = stack_length(*a);
	chunk = 1;
	pushed = 0;
	data = (t_chunk_data){arr, len, 0, 0, chunk_size, &pushed};
	while (pushed < len && *a)
	{
		data.min = (chunk - 1) * chunk_size;
		data.max = chunk * chunk_size - 1;
		if (data.max >= len)
			data.max = len - 1;
		push_chunk(a, b, &data);
		chunk++;
	}
}

void	rotate_b_to_max(t_stack **b, size_t idx, size_t b_len)
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
