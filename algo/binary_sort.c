/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:18:28 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 11:44:16 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_index(int nb, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		nb = nb / 10;
		i++;
	}
	return (nb % 10);
}

static	int	get_max_index(t_stacks *data)
{
	int	i;
	int	nb;
	int	j;

	i = 0;
	j = 0;
	while (j < data->size_a)
	{
		if (data->stack_a[j] > j)
			nb = data->stack_a[j];
		j++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	solve_binary(t_stacks *data)
{
	int	i;
	int	index;
	int	max;

	i = 0;
	index = 0;
	max = get_max_index(data);
	while (index <= get_max_index(data))
	{
		while (i < data->size_sort)
		{
			if (!get_index(data->stack_a[0], index))
			{
				pb(data);
			}
			else
				ra(data);
			i++;
		}
		i = 0;
		while (data->size_b > 0)
			pa(data);
		index++;
	}
}
