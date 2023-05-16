/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_mod_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:50:27 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 17:44:34 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **stack_a)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		if ((*stack_a)->nbr > (*stack_a)->next->nbr)
			ft_sa((*stack_a), 1);
	}
}

void	sort_3(t_stack **stack_a)
{
	if ((*stack_a)->nbr > (*stack_a)->next->nbr && \
		(*stack_a)->next->nbr < (*stack_a)->next->next->nbr && \
		(*stack_a)->nbr < (*stack_a)->next->next->nbr)
		ft_sa(*stack_a, 1);
	else if ((*stack_a)->nbr > (*stack_a)->next->nbr && \
		(*stack_a)->next->nbr > (*stack_a)->next->next->nbr)
	{
		ft_sa(*stack_a, 1);
		ft_rev_rot_stck_a(stack_a, 1);
	}
	else if ((*stack_a)->nbr > (*stack_a)->next->nbr && \
		(*stack_a)->nbr > (*stack_a)->next->next->nbr)
		ft_rot_stck_a(&(*stack_a), 1);
	else if ((*stack_a)->nbr < (*stack_a)->next->nbr && \
		(*stack_a)->next->nbr > (*stack_a)->next->next->nbr && \
		(*stack_a)->nbr < (*stack_a)->next->next->nbr)
	{
		ft_sa((*stack_a), 1);
		ft_rot_stck_a(stack_a, 1);
	}
	else if ((*stack_a)->nbr < (*stack_a)->next->nbr && \
		(*stack_a)->next->nbr > (*stack_a)->next->next->nbr)
		ft_rev_rot_stck_a(stack_a, 1);
}

void	easy_sort_mod(t_stack **stack_a, t_stack **stack_b)
{
	int	position;

	if (ft_lstsize(*stack_a) == 2)
		sort_2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_3(stack_a);
	else
	{
		position = find_position(*stack_a, check_min(*stack_a));
		while (position != 0)
		{
			if (position == 1)
				break ;
			if (position <= (ft_lstsize(*stack_a) / 2) + 1)
				ft_rot_stck_a(stack_a, 1);
			else
				ft_rev_rot_stck_a(stack_a, 1);
			position = find_position(*stack_a, check_min(*stack_a));
		}
		ft_pb(stack_a, stack_b);
		easy_sort_mod(stack_a, stack_b);
		ft_pa(stack_a, stack_b);
	}
}
