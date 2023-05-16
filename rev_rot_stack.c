/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:11:24 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:30:24 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rot_stck_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;
	t_stack	*head;

	head = *stack_a;
	while ((*stack_a)->next)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
	}
	tmp->next = NULL;
	(*stack_a)->next = head;
	if (i == 1)
		write (1, "rra\n", 4);
}

void	ft_rev_rot_stck_b(t_stack **stack_b, int i)
{
	t_stack	*tmp;
	t_stack	*head;

	head = *stack_b;
	while ((*stack_b)->next)
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
	}
	tmp->next = NULL;
	(*stack_b)->next = head;
	if (i == 1)
		write (1, "rrb\n", 4);
}

void	ft_rev_rot_stck_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rot_stck_a(stack_a, 0);
	ft_rev_rot_stck_b(stack_b, 0);
	write (1, "rrr\n", 4);
}
