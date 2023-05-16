/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:26:37 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:28:36 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stack **stack_a, t_stack **stack_b)
{
	t_data	data;

	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_a) <= 5)
		easy_sort_mod(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) <= 100)
		take_chanks(&data, stack_a, stack_b, 4);
	else
		take_chanks(&data, stack_a, stack_b, 8);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		stack_a = ft_join_stck(stack_a, ac, av);
		if (!stack_a)
			ft_exite(stack_a);
		if (ft_check_sort(stack_a))
		{
			ft_lstclear(&stack_a);
			exit(1);
		}
		sorting(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
	}
	else
		exit(1);
}
