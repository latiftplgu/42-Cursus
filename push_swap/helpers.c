/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:29 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:29 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_double(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

t_numberlist	*chartoint(char **str, int ac)
{
	t_numberlist	*ret;
	int				j;
	char			**args;

	ret = NULL;
	while (--ac > 0)
	{
		j = 0;
		args = ft_split(str[ac], ' ');
		while (args[j])
			j++;
		while (j--)
			addlist(&ret, ft_atoi(args[j]));
		ft_free_double(args);
	}
	return (ret);
}

void	addlist(t_numberlist **stack, int data)
{
	t_numberlist	*temp;

	temp = (t_numberlist *)malloc(sizeof(t_numberlist));
	if (!temp)
		return ;
	temp->content = data;
	temp->next = NULL;
	if (!stack)
	{
		(*stack) = temp;
		return ;
	}
	temp->next = (*stack);
	(*stack) = temp;
}

void	free_stack(t_numberlist *stack)
{
	t_numberlist	*temp;

	while (stack)
	{
		temp = stack;
		free(temp);
		stack = stack->next;
	}
}
