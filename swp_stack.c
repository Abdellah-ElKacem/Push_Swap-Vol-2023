/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swp_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:18 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/08 20:16:19 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	swp_stk_a(t_stack **stack_a)
{
	int	swp;

	if (*stack_a && (*stack_a)->next)
	{
		swp = (*stack_a)->nbr;
		(*stack_a)->nbr = (*stack_a)->next->nbr;
		(*stack_a)->next->nbr = swp;
	}
	write(1, "sa\n", 3);
}

void	swp_stk_b(t_stack **stack_b)
{
	int	swp;

	if (*stack_b && (*stack_b)->next)
	{
		swp = (*stack_b)->nbr;
		(*stack_b)->nbr = (*stack_b)->next->nbr;
		(*stack_b)->next->nbr = swp;
	}
	write(1, "sb\n", 3);
}

void	swp_both(t_stack **stack_a, t_stack **stack_b)
{
	swp_stk_a(stack_a);
	swp_stk_b(stack_b);
	write(1, "ss\n", 3);
}
