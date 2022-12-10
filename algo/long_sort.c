/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:36:58 by mfinette          #+#    #+#             */
/*   Updated: 2022/12/08 07:06:06 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	long_sort(t_stacks *data)
{
	int	i;

	i = 0;
	while (i < data->size_sort)
	{
		push_number_to_top(data, data->stack_sort[i]);
		pb(data);
		i++;
	}
	while (data->size_b > 0)
		pa(data);
}