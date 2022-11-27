/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:08:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 17:09:32 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_three(t_stacks *data)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = data->stack_a[data->size_a - 3];
	a2 = data->stack_a[data->size_a - 2];
	a3 = data->stack_a[data->size_a - 1];
	if (a1 < a2 && a2 > a3 && a3 > a1)
		return (sa(data), 1);
	if (a1 > a2 && a2 > a3)
		return (ra(data), sa(data), 1);
	if (a1 > a2 && a2 < a3 && a1 > a3)
		return (rra(data), 1);
	if (a1 > a2 && a2 < a3 && a3 > a1)
		return (rra(data), sa(data), 1);
	if (a1 < a2 && a2 > a3 && a3 < a1)
		return (ra(data), 1);
	return (1);
}

int	is_in_b(t_stacks *data, int tmp)
{
	int	i;

	i = 0;
	while (i < data->size_b)
	{
		if (data->stack_b[i] == tmp)
			return (1);
		i++;
	}
	return (0);
}

int	get_number_below(t_stacks *data, int tmp)
{
	int	i;

	i = 0;
	if ((data->stack_sort[i]) == tmp)
		return (data->stack_sort[data->size_sort - 1]);
	while (data->stack_sort[i] != tmp)
		i++;
	return (data->stack_sort[i - 1]);
}

int	push_number_to_top(t_stacks *data, int nb)
{
	int	i;
	int	top_dist;
	int	bot_dist;

	i = 0;
	while (data->stack_a[i] != nb)
		i++;
	bot_dist = i;
	top_dist = data->size_a - i - 1;
	i = 0;
	while (data->stack_a[data->size_a - 1] != nb)
	{
		if (top_dist > bot_dist)
		{
			rra(data);
			i++;
		}
		else
		{
			ra(data);
			i++;
		}
	}
	return (i);
}

int	sort_five(t_stacks *data)
{
	int	tmp;

	pb(data);
	pb(data);
	sort_three(data);
	tmp = data->stack_b[data->size_b - 1];
	while (is_in_b(data, get_number_below(data, tmp)))
	{
		rb(data);
		tmp = data->stack_b[data->size_b - 1];
	}
	push_number_to_top(data, get_number_below(data, tmp));
	pa(data);
	tmp = data->stack_b[data->size_b - 1];
	push_number_to_top(data, get_number_below(data, tmp));
	pa(data);
	while (!check_result(data))
		ra(data);
	return (0);
}
