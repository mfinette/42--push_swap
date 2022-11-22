/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:51:05 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/22 19:34:59 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks data)
{
	int	tmp;

	if (data.size_a > 1)
	{
		tmp = data.stack_a[data.size_a - 1];
		data.stack_a[data.size_a - 1] = data.stack_a[data.size_a - 2];
		data.stack_a[data.size_a - 2] = tmp;
	}
	ft_putstrendl("sa\n");
}

void	sb(t_stacks data)
{
	int	tmp;

	if (data.size_b > 1)
	{
		tmp = data.stack_b[data.size_b - 1];
		data.stack_b[data.size_b - 1] = data.stack_b[data.size_b - 2];
		data.stack_b[data.size_b - 2] = tmp;
	}
	ft_putstrendl("sb\n");
}

void	ss(t_stacks data)
{
	int	tmp;

	if (data.size_b > 1)
	{
		tmp = data.stack_b[data.size_b - 1];
		data.stack_b[data.size_b - 1] = data.stack_b[data.size_b - 2];
		data.stack_b[data.size_b - 2] = tmp;
	}
	if (data.size_a > 1)
	{
		tmp = data.stack_a[data.size_a - 1];
		data.stack_a[data.size_a - 1] = data.stack_a[data.size_a - 2];
		data.stack_a[data.size_a - 2] = tmp;
	}
	ft_putstrendl("ss\n");
}