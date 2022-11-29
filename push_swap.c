/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 20:59:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	data;

	if (!check_data(argc, argv))
		return (0);
	data = get_data(argc, argv);
	if (!data.stack_a || !data.stack_b || !data.stack_sort)
		return (free_all(&data), 1);
	general_sort(&data);
	free_all(&data);
	return (0);
}
