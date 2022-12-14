/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:34:19 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 19:20:47 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stacks	get_data(int argc, char **argv)
{
	t_stacks	data;

	if (argc == 2)
		data = get_data_str(argv[1]);
	else
		data = get_data_tab(argc, &argv[1]);
	return (data);
}
