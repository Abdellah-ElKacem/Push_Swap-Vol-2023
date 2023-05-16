/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swp_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:18 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/07 12:00:19 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *stack_a, int nbr)
{
	int	swp;
	int	posi;

	if (stack_a && stack_a->next)
	{
		swp = stack_a->nbr;
		stack_a->nbr = stack_a->next->nbr;
		stack_a->next->nbr = swp;
		posi = stack_a->pos;
		stack_a->pos = stack_a->next->pos;
		stack_a->next->pos = posi;
	}
	if (nbr == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_stack *stack_b, int nbr)
{
	int	swp;
	int	posi;

	if (stack_b && stack_b->next)
	{
		swp = stack_b->nbr;
		stack_b->nbr = stack_b->next->nbr;
		stack_b->next->nbr = swp;
		posi = stack_b->pos;
		stack_b->pos = stack_b->next->pos;
		stack_b->next->pos = posi;
	}
	if (nbr == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_sa(stack_a, 0);
	ft_sb(stack_b, 0);
	write(1, "ss\n", 3);
}
