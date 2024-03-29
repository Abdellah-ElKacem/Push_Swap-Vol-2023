/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llib_tool_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:50:51 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 17:53:50 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone(t_stack *lst)
{
	if (lst)
		free (lst);
	return ;
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
