/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:26:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 21:08:38 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	general_sort(t_stacks *data)
{
	if (is_sort(data))
		return (1);
	if (data->size_a == 2)
		return (sort_two(data));
	if (data->size_a == 3)
		return (sort_three(data));
	if (data->size_a == 5)
		return (sort_five(data));
	else
	{
		binary_index_parse(data);
		return (solve_binary(data), 1);
	}
	return (1);
}
