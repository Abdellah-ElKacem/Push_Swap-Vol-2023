/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:50:50 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/26 16:47:21 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '+' || str[0] == '-')
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_dbl(char **av)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	tmp = av;
	while (av[i])
	{
		while (tmp[j])
		{
			if (av[i] == av[j])
				return (0);
			j++;
		}
	}
	return (0);
}