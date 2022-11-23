/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:46:03 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/23 09:58:25 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_result(t_stacks *data)
{
	int	i;

	i = 1;
	while (i < data->size_sort)
	{
		if (data->stack_a[i] != data->stack_sort[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_input(t_stacks *data, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size_a)
	{
		j = i + 1;
		while (j < data->size_a)
		{
			if (data->stack_a[i] == data->stack_a[j])
			{
				ft_putstrendl("INPUT ERROR PLEASE DONT DO THAT\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}