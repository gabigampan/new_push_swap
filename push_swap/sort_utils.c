/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:07:06 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/08 14:47:37 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

int	find_min_pos(t_stack *stack)
{
	int		min;
	int		pos;
	int		i;
	t_stack	*tmp;

	if (!stack)
		return (-1);
	tmp = stack;
	min = tmp->cont;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->cont < min)
		{
			min = tmp->cont;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

void	move_min_to_b(t_stack **a, t_stack **b, int min_pos)
{
	int	size;
	int	i;

	size = stack_size(*a);

	if (min_pos == -1)
		min_pos = find_min_pos(*a);

	if (min_pos == 1)
		sa(a, 1);
	else if (min_pos <= size / 2)
	{
		i = min_pos;
		while (i-- > 0)
			ra(a, 1);
	}
	else
	{
		i = size - min_pos;
		while (i-- > 0)
			rra(a, 1);
	}
	pb(a, b, 1);
}
