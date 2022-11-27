/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_parsing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:47:09 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 17:47:39 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	dec_to_bin(long n)
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

void	binary_index_parse(t_stacks	*data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->size_sort)
	{
		while (j < data->size_sort)
		{
			if (data->stack_a[j] == data->stack_sort[i])
				data->stack_a[j] = dec_to_bin(i);
			j++;
		}
	j = 0;
	i++;
	}
}
