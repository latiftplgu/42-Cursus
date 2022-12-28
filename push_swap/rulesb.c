/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulesb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:43 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:43 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_numberlist **lst)
{
	int	temp;

	write (1, "sb\n", 3);
	temp = (*lst)-> next -> content;
	(*lst)-> next -> content = (*lst)->content;
	(*lst)-> content = temp;
}

void	pb(t_numberlist **lsta, t_numberlist **lstb)
{
	t_numberlist	*temp;

	write (1, "pb\n", 3);
	temp = (*lsta)-> next;
	ft_listadd_front(lstb, *lsta);
	(*lsta) = temp;
}

void	rb(t_numberlist **lstb)
{
	t_numberlist	*frontlist;
	t_numberlist	*backlist;

	write (1, "rb\n", 3);
	frontlist = (*lstb)-> next;
	backlist = ft_lstlast(*lstb);
	backlist -> next = (*lstb);
	(*lstb)-> next = NULL;
	(*lstb) = frontlist;
}

void	rrb(t_numberlist **lstb)
{
	t_numberlist	*lastlist;
	t_numberlist	*temp;
	int				i;

	write (1, "rrb\n", 4);
	temp = *lstb;
	i = ft_lstlast(*lstb)-> content;
	while (temp -> next -> next != NULL)
		temp = temp -> next;
	free(ft_lstlast(*lstb));
	temp -> next = NULL;
	lastlist = malloc(sizeof(t_numberlist));
	lastlist -> content = i;
	lastlist -> next = *lstb;
	*lstb = lastlist;
}
