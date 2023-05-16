/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_mod_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:16:31 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:07:48 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int	position;

	while (ft_lstsize(*stack_b) != 0)
	{
		position = find_position(*stack_b, check_max(*stack_b));
		while (position != 0)
		{
			if (position == 1)
				break ;
			if (position <= (ft_lstsize(*stack_b) / 2) + 1)
				ft_rot_stck_b(stack_b, 1);
			else
				ft_rev_rot_stck_b(stack_b, 1);
			position = find_position(*stack_b, check_max(*stack_b));
		}
		ft_pa(stack_a, stack_b);
	}
}

void	take_chanks(t_data *data, t_stack **stack_a, \
		t_stack **stack_b, int num)
{
	data->size = (ft_lstsize(*stack_a) / num);
	data->next = data->size;
	data->ugment = 0;
	while (*stack_a)
	{
		if ((*stack_a)->pos <= data->next)
		{
			if ((*stack_a)->pos <= (data->next / 2))
				ft_pb(stack_a, stack_b);
			else
			{
				ft_pb(stack_a, stack_b);
				ft_rot_stck_b(stack_b, 1);
			}
			data->ugment++;
		}
		else if (data->ugment == data->size)
		{
			data->next = data->next + data->size;
			data->ugment = 0;
		}
		else
			ft_rot_stck_a(stack_a, 1);
	}
	push_to_a(stack_a, stack_b);
}
