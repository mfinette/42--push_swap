/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:27:58 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 21:09:00 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_two(t_stacks *data)
{
	if (data->stack_a[1] > data->stack_a[0])
		return (1);
	return (sa(data), 1);
}

int	inverse_sort_two_b(t_stacks *data)
{
	if (data->stack_b[1] < data->stack_b[0])
		return (1);
	return (sb(data), 1);
}

int	sort_two_b(t_stacks *data)
{
	if (data->stack_b[1] > data->stack_b[0])
		return (1);
	return (sb(data), 1);
}
