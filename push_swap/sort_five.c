/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:17:29 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/08 14:47:10 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_pos;
	int	size;

	size = 5;
	while (size > 3)
	{
		min_pos = find_min_pos(*a);
		if (min_pos == 1)
			sa(a, 1);
		else if (min_pos <= size / 2)
			while (min_pos-- > 0)
				ra(a, 1);
		else
			while (min_pos++ < size)
				rra(a, 1);
		pb(a, b, 1);
		size--;
	}
	sort_three(a);
	pa(a, b, 1);
	pa(a, b, 1);
}
