/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psh_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:46 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 18:34:08 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_b)
	{
		tmp = (*stack_b);
		ft_lstadd_front(stack_a, ft_lstnew(tmp->nbr));
		(*stack_b) = (*stack_b)->next;
		ft_lstdelone(tmp);
		write (1, "pa\n", 3);
	}
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_a)
	{
		tmp = (*stack_a);
		ft_lstadd_front(stack_b, ft_lstnew(tmp->nbr));
		(*stack_a) = (*stack_a)->next;
		ft_lstdelone(tmp);
		write (1, "pb\n", 3);
	}
}
