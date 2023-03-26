/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:52:21 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/26 22:10:00 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// size_t	stack_size(t_stack *data)
// {
// 	size_t	size;

// 	size = 0;
// 	while (data)
// 	{
// 		data = data->next;
// 		size++;
// 	}
// 	return (size);
// }

t_list	*join_stck(int ac, char **av)
{
	t_list	*first;
	char	**str;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			if (check_num(str[j]))
				ft_lstadd_front()
		}
		i++;
	}
	return (first);
}
