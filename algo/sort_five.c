/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:08:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/12/08 07:04:11 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	is_in_b(t_stacks *data, int tmp)
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

static	int	get_number_above(t_stacks *data, int tmp)
{
	int	i;

	i = 0;
	if ((data->stack_sort[data->size_sort - 1]) == tmp)
		return (data->stack_sort[0]);
	while (data->stack_sort[i] != tmp)
		i++;
	return (data->stack_sort[i + 1]);
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
	top_dist = data->size_a - i;
	i = 0;
	while (data->stack_a[0] != nb)
	{
		if (top_dist > bot_dist)
			ra(data);
		else
			rra(data);
		i++;
	}
	return (i);
}

int	sort_five(t_stacks *data)
{
	int	tmp;

	pb(data);
	pb(data);
	sort_three(data);
	tmp = data->stack_b[0];
	if (is_in_b(data, get_number_above(data, tmp)))
		sb(data);
	tmp = data->stack_b[0];
	push_number_to_top(data, get_number_above(data, tmp));
	pa(data);
	tmp = data->stack_b[0];
	push_number_to_top(data, get_number_above(data, tmp));
	pa(data);
	push_number_to_top(data, data->stack_sort[0]);
	return (0);
}
