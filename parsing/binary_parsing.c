/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_parsing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:47:09 by mfinette          #+#    #+#             */
/*   Updated: 2022/12/02 21:00:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	long	dec_to_bin(long n)
{
	long	bin;
	long	dec;
	long	i;

	bin = 0;
	dec = n;
	i = 1;
	while (dec > 0)
	{
		bin += (dec % 2) * i;
		dec /= 2;
		i *= 10;
	}
	return (bin);
}

static	int	get_index_sorted(t_stacks *data, int nb)
{
	int	i;

	i = 0;
	while (i < data->size_sort)
	{
		if (nb == data->stack_sort[i])
			return (i);
		i++;
	}
	return (0);
}

void	binary_index_parse(t_stacks *data)
{
	int	i;

	i = 0;
	while (i < data->size_a)
	{
		data->stack_a[i] = dec_to_bin(get_index_sorted(data, data->stack_a[i]));
		i++;
	}
}
