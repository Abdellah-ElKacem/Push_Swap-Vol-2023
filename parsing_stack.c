/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:52:21 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:00:41 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (!ft_isdigit(str[i]))
			ft_exi();
		i++;
	}
	return (1);
}

void	ft_check_dbl(t_stack *stack_a)
{
	t_stack	*tmp;

	tmp = stack_a;
	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->nbr == tmp->nbr)
				ft_exite(stack_a);
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}

t_stack	*ft_join_stck(t_stack *first, int ac, char **av)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	ft_check_empty(ac, av);
	while (++i < ac)
	{
		j = -1;
		str = ft_split(av[i], ' ');
		while (str[++j])
		{
			if (ft_check_num(str[j]))
			{
				if (!first)
					first = ft_lstnew(ft_atoi(str[j]));
				else
					ft_lstadd_back(&first, ft_lstnew(ft_atoi(str[j])));
			}
		}
		ft_check_dbl(first);
		ft_freed(str);
	}
	return (first);
}

int	ft_check_sort(t_stack *stack_a)
{
	t_stack	*tmp;

	tmp = stack_a;
	while (tmp->next)
	{
		if (tmp->nbr > tmp->next->nbr)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_check_empty(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		if (!(ft_strlen(av[i])) || !(check_spaces(av[i])))
			ft_exi();
	}
	return (0);
}
