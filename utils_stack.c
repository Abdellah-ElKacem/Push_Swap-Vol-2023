/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:52:21 by ael-kace          #+#    #+#             */
/*   Updated: 2023/03/09 13:56:08 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	stack_size(t_stack *data)
{
	size_t	size;

	size = 0;
	while (data)
	{
		data = data->next;
		size++;
	}
	return (size);
}