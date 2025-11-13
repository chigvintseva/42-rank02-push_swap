/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:42:09 by achigvin          #+#    #+#             */
/*   Updated: 2025/11/13 17:42:09 by achigvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "push_swap.h"

// int	find_target_value(t_stack *a, t_stack *b)
// {
// 	int	target;
// 	int	b_value;

// 	target = INT_MAX;
// 	b_value = b->value;
// 	while (a->next != NULL)
// 	{
// 		if (a->value > b_value && a->value < target)
// 			target = a->value;
// 		a = a->next;
// 	}
// 	if (target == INT_MAX)
// 		target = find_min(a);
// 	return (target);
// }

// size_t	find_index(t_stack *a, int target)
// {
// 	size_t	index;

// 	index = 0;
// 	while (a->value != target && a != NULL)
// 	{
// 		index++;
// 		a = a->next;
// 	}
// 	return (index);
// }

// void	bring_to_top(t_stack **a)
// {
// 	size_t	index;
// 	size_t	length;

// 	index = find_index(*a, target);
// 	length = stack_length(*a);
// 	if (cost <= (length / 2))
// 	{
// 		while (index-- > 0)
// 			ra(a);
// 	}
// 	else
// 	{
// 		while (index++ < length)
// 			rra(a);
// 	}
// }

// void	turk_sort(t_stack **a, t_stack **b)
// {
// 	size_t	length;
// 	int		target;
// 	size_t	cost;

// 	length = stack_length(*a);
// 	while (length-- > 3)
// 		pb(a, b);
// 	sort_3(a);
// 	length = stack_length(*b);
// 	while (length-- > 1)
// 	{
// 		target = find_target_value(*a, *b);
// 		bring_to_top(a, target);
// 		pa(a, b);
// 	}
// 	return ;
// }

// turk_sort.c
#include "push_swap.h"

int find_target_value(t_stack *a, t_stack *b)
{
    int target = INT_MAX;
    int b_value = b->value;

    // Find the smallest number greater than b_value in stack a
    while (a != NULL)
    {
        if (a->value > b_value && a->value < target)
            target = a->value;
        a = a->next;
    }

    // If no valid target is found, return the minimum in stack a
    if (target == INT_MAX)
        target = find_min(a);

    return target;
}

size_t find_index(t_stack *a, int target)
{
    size_t index = 0;
    while (a != NULL && a->value != target)
    {
        index++;
        a = a->next;
    }
    return index;
}

void bring_to_top(t_stack **a, int target)
{
    size_t index = find_index(*a, target);
    size_t length = stack_length(*a);

    // If the index is in the first half, rotate; otherwise, reverse rotate
    if (index <= (length / 2))
    {
        while (index-- > 0)
            ra(a);
    }
    else
    {
        while (index++ < length)
            rra(a);
    }
}

void turk_sort(t_stack **a, t_stack **b)
{
    size_t length = stack_length(*a);
    int target;

    // Step 1: Push all elements from `a` to `b` until there are only 3 elements left in `a`
    while (length-- > 3)
        pb(a, b);

    // Step 2: Sort the remaining 3 elements in `a`
    sort_3(a);

    // Step 3: Process each element from `b` and move them to `a` in the correct order
    length = stack_length(*b);
    while (length-- > 1)
    {
        target = find_target_value(*a, *b);  // Find the target value in `a` for the current node in `b`
        bring_to_top(a, target);              // Bring the target value to the top of `a`
        pa(a, b);                             // Push the node from `b` to `a`
    }
}
