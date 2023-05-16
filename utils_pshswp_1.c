/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pshswp_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:11:45 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:17:08 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	**ft_freed(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return (0);
}

int	ft_exite(t_stack *stack_a)
{
	ft_lstclear(&stack_a);
	write(2, "Error\n", 6);
	exit(1);
}
