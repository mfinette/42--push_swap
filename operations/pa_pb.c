/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:26:59 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/23 08:30:13 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stacks *data)
{
	if (data->size_b == 0)
		return ;
	data->stack_a[data->size_a] = data->stack_b[data->size_b - 1];
	data->stack_b[data->size_b - 1] = 0;
	data->size_a++;
	data->size_b--;
	ft_putstrendl("pa\n");
}

void	pb(t_stacks *data)
{
	if (data->size_a == 0)
		return ;
	data->stack_b[data->size_b] = data->stack_a[data->size_a - 1];
	data->stack_a[data->size_a - 1] = 0;
	data->size_b++;
	data->size_a--;
	ft_putstrendl("pb\n");
}
