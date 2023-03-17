/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psh_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:46 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/09 23:11:04 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psh_stk_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_size(*stack_a) > 0)
	{
		*stack_a = tmp;
		tmp = *stack_b;
		free(*stack_a);
	}
	free (tmp);
	write (1, "pb\n", 1);
}

void	psh_stk_b(t_stack **stack_a, t_stack **stack_b)
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
