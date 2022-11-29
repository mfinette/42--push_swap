/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrendl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:55:43 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 21:02:26 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putstrendl(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_puterror(char *str)
{
	return (write(2, str, ft_strlen(str)));
}