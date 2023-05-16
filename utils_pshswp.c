/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pshswp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:50:50 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:15:32 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_spaces(char *str)
{
	int	i;
	int	space;
	int	len;

	i = 0;
	space = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == ' ')
			space++;
		i++;
	}
	if (space == len)
		return (0);
	return (1);
}

int	ft_exi(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	check_max(t_stack *stack_a)
{
	t_stack	*fake;
	int		max;

	fake = stack_a;
	max = INT_MIN;
	while (fake)
	{
		if (fake->nbr > max)
			max = fake->nbr;
		fake = fake->next;
	}
	return (max);
}

int	check_min(t_stack *stack_a)
{
	t_stack	*fake;
	int		min;

	fake = stack_a;
	min = check_max(stack_a);
	while (fake)
	{
		if (fake->nbr < min)
			min = fake->nbr;
		fake = fake->next;
	}
	return (min);
}

int	find_position(t_stack *stack_a, int nbr)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack_a;
	while (++i < ft_lstsize(stack_a) && tmp)
	{
		if (tmp->nbr == nbr)
			break ;
		tmp = tmp->next;
	}
	return (i);
}
