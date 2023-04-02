/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:11:24 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/02 21:07:08 by abdellah_el      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rot_stck_a(t_stack **stack_a, int i)
{
	t_stack *tmp;
	
	tmp = ft_lstlast(&stack_a);
	free(ft_lstlast(&stack_a));
	ft_lstadd_front(stack_a, tmp);
	if (i == 1)
		write (1, "ra\n", 3);
}

void    rot_stck_b(t_stack **stack_a, int i)
{
	t_stack *tmp;
	
	tmp = ft_lstlast(&stack_a);
	free(ft_lstlast(&stack_a));
	ft_lstadd_front(stack_a, tmp);
	if (i == 1)
		write (1, "rb\n", 3);
}

void    rot_stck_both(t_stack **stack_a, t_stack **stack_b)
{
	rot_stck_a(stack_a, 0);
	rot_stck_b(stack_b, 0);
	write (1, "rr\n", 3);
}
