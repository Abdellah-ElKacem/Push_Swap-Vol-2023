/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llib_tool_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:52:18 by abdellah_el       #+#    #+#             */
/*   Updated: 2023/03/31 18:25:51 by abdellah_el      ###   ########.fr       */
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