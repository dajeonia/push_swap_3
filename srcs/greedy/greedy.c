/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:50:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/07/22 12:27:34 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "push_swap.h"

void	greedy_renew(t_data *data, t_vars *vars, int index, int value);

t_data	*greedy(t_vars *vars, t_stack *stack)
{
	t_data	*data;
	int		i;
	int		size;

	data = data_new();
	if (data == NULL)
		return (NULL);
	size = ft_stsize(stack);
	i = 0;
	while (i < size)
	{
		greedy_renew(data, vars, i, stack->data);
		stack = stack->next;
		i++;
	}
	return (data);
}
