/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:19:42 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/28 16:43:02 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_next_i(char *str, int i)
{
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
		i++;
	while (str[i] == ' ')
		i++;
	return (i);
}

long	long_atoi(char *str)
{
	int				i;
	long long int	result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result != ((result * 10 + (sign * (str[i] - '0'))) / 10))
			return ((int)((sign + 1) / 2 / -1));
		result = result * 10;
		result = result + (str[i] - 48) * sign;
		i++;
	}
	return (result);
}

static int	overflow_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i + j] && str[i + j] != ' ')
		j++;
	return (j);
}

int	check_overflow_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (overflow_strlen(&str[i]) >= 10)
		{
			if (long_atoi(&str[i]) > INT_MAX)
				return (1);
			if (long_atoi(&str[i]) < INT_MIN)
				return (1);
		}
		if (overflow_strlen(&str[i]) > 11)
			return (1);
		i = get_next_i(str, i);
	}
	return (0);
}
