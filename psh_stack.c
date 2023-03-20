/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psh_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:46 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/20 10:07:40 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_size(*stack_b) > 0)
	{
		(*stack_a)->nbr = (*stack_b)->nbr;
	}
	free (tmp);
	write (1, "pa\n", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_size(*stack_a) > 0)
	{
		*stack_b = tmp;
		tmp = *stack_a;
		free(*stack_b);
	}
	free (tmp);
	write (1, "pa\n", 1);
}
