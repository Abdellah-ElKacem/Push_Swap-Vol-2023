/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:26:37 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/02 17:47:18 by abdellah_el      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	// t_stack	*stack_b;

	stack_a = NULL;
	// stack_b = NULL;
	if (ac > 1)
	{
		stack_a = join_stck(stack_a, ac, av);
		if (!stack_a)
			ft_exite();
		if (check_sort(&stack_a) == 1)
			printf("is sorted\n");
		if (check_sort(&stack_a) == 0)
			printf("is not sorted\n");
		// check_sort(&stack_a);
		while (stack_a)
		{
			printf("stack_a = %d\n", stack_a->nbr);
			stack_a = stack_a->next;
		}
	}
	else
		exit(1);
}
