/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:56:42 by fragamez          #+#    #+#             */
/*   Updated: 2025/05/08 15:11:14 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*a)->cont;
	mid = (*a)->next->cont;
	bot = (*a)->next->next->cont;
	if (top > mid && mid < bot && bot > top)
		sa(a, 1);
	else if (top > mid && mid > bot)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (top > mid && mid < bot && bot < top)
		ra(a, 1);
	else if (top < mid && mid > bot && bot > top)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (top < mid && mid > bot && bot < top)
		rra(a, 1);
}
