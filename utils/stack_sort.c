/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:48:48 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 18:48:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_sort(t_stacks data, int i)
{
	int	temp;
	int	j;

	while (i < data.size_a)
	{
		data.stack_sort[i] = data.stack_a[i];
		i++;
	}
	i = 0;
	while (i < data.size_a - 1)
	{
		j = i + 1;
		while (j < data.size_a)
		{
			if (data.stack_sort[j] < data.stack_sort[i])
			{
				temp = data.stack_sort[i];
				data.stack_sort[i] = data.stack_sort[j];
				data.stack_sort[j] = temp;
			}
			j++;
		}
		i++;
	}
}
