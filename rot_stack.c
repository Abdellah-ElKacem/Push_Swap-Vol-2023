/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:22:24 by abdellah_el       #+#    #+#             */
/*   Updated: 2023/04/02 21:14:00 by abdellah_el      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rot_stck_a(t_stack **stack_a, int i)
{
	t_stack *tmp;

	tmp = (*stack_a);
	free (*stack_a);
	ft_lstadd_back(stack_a, tmp);
	if (i == 1)
		write (1, "rra\n", 4);
}

void	rev_rot_stck_b(t_stack **stack_b, int i)
{
	t_stack *tmp;

	tmp = (*stack_a);
	free (*stack_a);
	ft_lstadd_back(stack_a, tmp);
	if (i == 1)
		write (1, "rrb\n", 4);
}

void	rev_rot_stck_both(t_stack **stack_a, t_stack **b)
{
	rev_rot_stck_a(stack_a, 0);
	rev_rot_stck_b(stack_b, 0);
	write (1, "rrr\n", 4);
}