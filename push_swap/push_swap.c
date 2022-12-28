/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:23 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:23 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_numberlist	*push_swap(char **args, int acc)
{
	t_numberlist	*a;
	t_numberlist	*b;

	b = NULL;
	a = chartoint(args, acc);
	acc = ft_lstsize(a);
	index_push(a);
	if (!different(a))
	{
		write(2, "Error\n", 6);
		free_stack(a);
		exit(1);
	}
	if (ft_lstsize(a) == 5)
		five_arr(&a, &b);
	else if (ft_lstsize(a) < 4)
		three_arr(&a);
	big_arr(&a, &b, acc, 0);
	free_stack(b);
	free_stack(a);
	return (a);
}

int	main(int acc, char *args[])
{
	if (!checkargs(args, acc))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	else if (acc > 1)
	{
		push_swap(args, acc);
		exit(0);
	}
}
