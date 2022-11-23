/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:03:15 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/23 07:50:48 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks *data)
{
	int	tmp;
	int	i;

	i = data->size_a - 1;
	tmp = data->stack_a[data->size_a - 1];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[i] = tmp;
	ft_putstrendl("ra\n");
}

void	rb(t_stacks *data)
{
	int	tmp;
	int	i;

	i = data->size_b - 1;
	tmp = data->stack_b[data->size_b - 1];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[i] = tmp;
	ft_putstrendl("rb\n");
}

void	rr(t_stacks *data)
{
	int	tmp;
	int	i;

	i = data->size_a - 1;
	tmp = data->stack_a[data->size_a - 1];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[i] = tmp;
	i = data->size_b - 1;
	tmp = data->stack_b[data->size_b - 1];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[i] = tmp;
	ft_putstrendl("rr\n");
}
