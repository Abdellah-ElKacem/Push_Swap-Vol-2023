/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:52:21 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/02 17:44:41 by abdellah_el      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_exite();
		i++;
	}
	return (1);
}

void check_dbl(t_stack *stack_a)
{
	t_stack *tmp;

	tmp = stack_a;
	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->nbr == tmp->nbr)
				ft_exite();
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}

t_stack	*join_stck(t_stack *first, int ac, char **av)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	while (++i < ac)
	{
		j = -1;
		str = ft_split(av[i], ' ');
		while (str[++j])
		{
			if (check_num(str[j]))
			{
				if (!first)
					first = ft_lstnew(ft_atoi(str[j]));
				else
					ft_lstadd_back(&first, ft_lstnew(ft_atoi(str[j])));
			}
		}
		check_dbl(first);
	}
	return (first);
}

int check_sort(t_stack **stack_a)
{
	t_stack	**tmp;
	
	tmp = stack_a;
	while ((*tmp)->next)
	{
		if ((*tmp)->nbr > (*tmp)->next->nbr)
			return (0);
		(*tmp) = (*tmp)->next;
	}
	return (1);
}