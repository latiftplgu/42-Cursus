/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listUtils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:34 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:34 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_listadd_front(t_numberlist **lst, t_numberlist *new)
{
	new -> next = *lst;
	*lst = new;
}

t_numberlist	*ft_lstlast(t_numberlist *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

t_numberlist	*ft_lsthere(t_numberlist *lst, int c)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL && i < c)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}

int	ft_lstsize(t_numberlist *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

int	ft_lstdata(t_numberlist *lst, int c)
{
	int	data;
	int	i;

	i = 0;
	while (i <= c && lst != NULL)
	{
		data = lst -> content;
		lst = lst -> next;
		i++;
	}
	return (data);
}
