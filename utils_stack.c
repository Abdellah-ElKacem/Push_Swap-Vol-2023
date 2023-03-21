/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:52:21 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/21 17:30:03 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	stack_size(t_stack *data)
{
	size_t	size;

	size = 0;
	while (data)
	{
		data = data->next;
		size++;
	}
	return (size);
}

char	**join_sstck(char **av)
{
	char	*tmp;
	char	*tmp_tmp;
	char	**str;
	int		i;

	i = 1;
	tmp_tmp = ft_strdup("");
	while (av[i])
	{
		tmp = ft_strjoin(tmp_tmp, av[i]);
		free (tmp_tmp);
		tmp_tmp = ft_strjoin(tmp, av[i]);
		free(tmp);
		i++;
	}
	str = ft_split(tmp_tmp, ' ');
	free(tmp_tmp);
	return (str);
}

char	**join_stck(char **av)
{
	char	**str;
	int		i;

	i = 1;
	while (av[i])
		str = ft_split(av[i], ' ');
	return (str);
}

int main (int ac, char **av)
{
	int i;

	i = 0;
	while (av[i])
	{
		printf("%s", join_stck(av));
		i++;
	}
}