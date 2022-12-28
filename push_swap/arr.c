/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:27 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:27 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_arr(t_numberlist **a_tank, t_numberlist **b_tank, int len, int i)
{
	int	data;
	int	j;

	while (check_arr(*a_tank) == 0)
	{
		j = 0;
		while (j < len)
		{
			data = ft_lsthere(*a_tank, 0)->index;
			printf("Data>>i:%d\n",data >> i);
			if (((data >> i) & 1) == 1)
				ra(a_tank);
			else
				pb(a_tank, b_tank);
			j++;
		}
		while (ft_lstsize(*b_tank) > 0)
			pa(a_tank, b_tank);
		i++;
	}
}

void	three_arr(t_numberlist **stack)
{
	if (min_index(*stack) == 0 && big_index(*stack) == 1)
	{
		rra(stack);
		sa(stack);
	}
	else if (min_index(*stack) == 1 && big_index(*stack) == 2)
		sa(stack);
	else if (min_index(*stack) == 2 && big_index(*stack) == 1)
		rra(stack);
	else if (min_index(*stack) == 1 && big_index(*stack) == 0)
		ra(stack);
	else if (min_index(*stack) == 2 && big_index(*stack) == 0)
	{
		sa(stack);
		rra(stack);
	}
}

void	five_arr(t_numberlist **stack, t_numberlist **b_tank)
{
	int	i;

	i = 0;
	while (ft_lstsize(*stack) > 3)
	{
		i = min_index(*stack);
		if (i <= ft_lstsize(*stack) / 2 && i != 0)
			ra(stack);
		else if (i >= ft_lstsize(*stack) / 2 && i != 0)
			rra(stack);
		else
			pb(stack, b_tank);
	}
	three_arr(stack);
	while (*b_tank)
		pa(stack, b_tank);
}
