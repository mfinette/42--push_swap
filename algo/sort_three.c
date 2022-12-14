/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:22:44 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 08:10:20 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_three(t_stacks *data)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = data->stack_a[0];
	a2 = data->stack_a[1];
	a3 = data->stack_a[2];
	if (a1 < a2 && a2 > a3 && a3 > a1)
		return (rra(data), sa(data), 1);
	if (a1 > a2 && a2 > a3)
		return (ra(data), sa(data), 1);
	if (a1 > a2 && a2 < a3 && a1 > a3)
		return (ra(data), 1);
	if (a1 > a2 && a2 < a3 && a3 > a1)
		return (sa(data), 1);
	if (a1 < a2 && a2 > a3 && a3 < a1)
		return (rra(data), 1);
	return (1);
}
