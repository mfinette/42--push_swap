/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:26:59 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 07:54:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stacks *data)
{
	int	i;

	i = data->size_a;
	if (data->size_b == 0)
		return ;
	while (i >= 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}	
	data->stack_a[0] = data->stack_b[0];
	i = 0;
	while (i < data->size_a - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[data->size_b - 1] = 0;
	data->size_a++;
	data->size_b--;
	ft_putstrendl("pa\n");
}

void	pb(t_stacks *data)
{
	int	i;

	i = data->size_b;
	if (data->size_a == 0)
		return ;
	while (i >= 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}	
	data->stack_b[0] = data->stack_a[0];
	i = 0;
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->size_a - 1] = 0;
	data->size_b++;
	data->size_a--;
	ft_putstrendl("pb\n");
}
