/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:51:05 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/28 18:17:11 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stacks *data)
{
	int	tmp;

	if (data->size_a > 1)
	{
		tmp = data->stack_a[1];
		data->stack_a[1] = data->stack_a[0];
		data->stack_a[0] = tmp;
	}
	ft_putstrendl("sa\n");
}

void	sb(t_stacks *data)
{
	int	tmp;

	if (data->size_b > 1)
	{
		tmp = data->stack_b[1];
		data->stack_b[1] = data->stack_b[0];
		data->stack_b[0] = tmp;
	}
	ft_putstrendl("sb\n");
}

void	ss(t_stacks *data)
{
	int	tmp;

	if (data->size_b > 1)
	{
		tmp = data->stack_b[1];
		data->stack_b[1] = data->stack_b[0];
		data->stack_b[0] = tmp;
	}
	if (data->size_a > 1)
	{
		tmp = data->stack_a[1];
		data->stack_a[1] = data->stack_a[0];
		data->stack_a[0] = tmp;
	}
	ft_putstrendl("ss\n");
}
