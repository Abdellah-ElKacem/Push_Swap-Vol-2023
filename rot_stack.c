/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:51:29 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 16:52:12 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rot_stck_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	tmp = (*stack_a);
	ft_lstadd_back(stack_a, ft_lstnew(tmp->nbr));
	*stack_a = (*stack_a)->next;
	ft_lstdelone(tmp);
	if (i == 1)
		write (1, "ra\n", 3);
}

void	ft_rot_stck_b(t_stack **stack_b, int i)
{
	t_stack	*tmp;

	tmp = (*stack_b);
	ft_lstadd_back(stack_b, ft_lstnew(tmp->nbr));
	*stack_b = (*stack_b)->next;
	ft_lstdelone(tmp);
	if (i == 1)
		write (1, "rb\n", 3);
}

void	ft_rot_stck_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_rot_stck_a(stack_a, 0);
	ft_rot_stck_b(stack_b, 0);
	write (1, "rr\n", 3);
}
