/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:26:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 19:41:10 by mfinette         ###   ########.fr       */
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
	if (data->size_a == 5 || data->size_a == 4)
		return (sort_five(data));
	if (data->size_a > 5)
	{
		binary_index_parse(data);
		return (solve_binary(data), 1);
	}
	return (1);
}