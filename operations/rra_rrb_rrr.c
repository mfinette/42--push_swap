/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:36:32 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 07:27:14 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stacks *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->stack_a[0];
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = tmp;
	ft_putstrendl("ra\n");
}

void	rb(t_stacks *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->stack_b[0];
	while (i < data->size_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i] = tmp;
	ft_putstrendl("rb\n");
}

void	rr(t_stacks *data)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = data->stack_b[0];
	while (i < data->size_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i] = tmp;
	i = 0;
	tmp = data->stack_a[0];
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = tmp;
	ft_putstrendl("rr\n");
}
