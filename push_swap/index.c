/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:30 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:30 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	min_index(t_numberlist *stack)
{
	int					i;
	int					data;
	t_numberlist		*temp;

	temp = stack;
	data = temp -> content;
	i = 0;
	while (stack != NULL)
	{
		printf("DATA:%d\n",data);
		printf("STACK:%d\n",stack->content);
		printf("I:%d\n",i); // en kucuk sayinin indexini buluyor
		printf("--------------------\n");
		if (data <= stack -> content && stack != NULL)
			stack = stack -> next;
		else
		{
			temp = temp -> next;
			data = temp -> content;
			i++;
		}
	}
	return (i);
}

void	index_push(t_numberlist(*stack))
{
	int	data1;
	int	data2;
	int	i;
	int	k;
	int	indis;

	i = 0;
	while (i < ft_lstsize(stack))
	{
		indis = 0;
		k = 0;
		data1 = ft_lstdata(stack, i);
		while (k < ft_lstsize(stack))
		{
			data2 = ft_lstdata((stack), k);
			if (data1 > data2)
				indis++;
			k++;
		}
		// printf("%d\n",indis); hangi sayinin hangi index de oldugunu buluyor
		ft_lsthere(stack, i)->index = indis;
		i++;
		if (i == ft_lstsize(stack))
			return ;
	}
}

int	big_index(t_numberlist *stack)
{
	int				i;
	int				data;
	t_numberlist	*temp;

	temp = stack;
	data = temp -> content;
	i = 0;

	while (stack != NULL)
	{
	// 	printf("DATA:%d\n",data);
	// printf("STACK:%d\n",stack->content);
	// printf("I:%d\n",i);
	// printf("--------------------\n");
		if (data >= stack -> content && stack != NULL)
			stack = stack -> next;
		else
		{
			temp = temp -> next;
			data = temp -> content;
			i++;
		}
	}
	return (i);
}
