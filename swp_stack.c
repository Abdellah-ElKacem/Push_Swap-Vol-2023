/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swp_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:18 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/20 09:48:59 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	sa(t_stack **stack_a, int nbr)
{
	int	swp;

	if (*stack_a && (*stack_a)->next)
	{
		swp = (*stack_a)->nbr;
		(*stack_a)->nbr = (*stack_a)->next->nbr;
		(*stack_a)->next->nbr = swp;
	}
	if (nbr == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack **stack_b, int nbr)
{
	int	swp;

	if (*stack_b && (*stack_b)->next)
	{
		swp = (*stack_b)->nbr;
		(*stack_b)->nbr = (*stack_b)->next->nbr;
		(*stack_b)->next->nbr = swp;
	}
	if (nbr == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write(1, "ss\n", 3);
}
