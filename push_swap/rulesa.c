/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulesa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:41 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:41 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_numberlist **lst)
{
	int	temp;

	write (1, "sa\n", 3);
	temp = (*lst)->next -> content;
	(*lst)->next -> content = (*lst)-> content;
	(*lst)->content = temp;
}

void	pa(t_numberlist **lsta, t_numberlist **lstb)
{
	t_numberlist	*temp;

	write (1, "pa\n", 3);
	temp = NULL;
	temp = (*lstb)-> next;
	ft_listadd_front(lsta, *lstb);
	(*lstb) = temp;
}

void	ra(t_numberlist **lsta)
{
	t_numberlist	*frontlist;
	t_numberlist	*backlist;

	write (1, "ra\n", 3);
	frontlist = (*lsta)-> next;
	backlist = ft_lstlast(*lsta);
	backlist -> next = (*lsta);
	(*lsta)-> next = NULL;
	(*lsta) = frontlist;
}

void	rra(t_numberlist **lsta)
{
	t_numberlist	*lastlist;
	t_numberlist	*temp;
	int				i;

	write (1, "rra\n", 4);
	temp = *lsta;
	i = ft_lstlast((*lsta))-> content;
	while (temp -> next -> next != NULL)
		temp = temp -> next;
	free(ft_lstlast(*lsta));
	temp -> next = NULL;
	lastlist = malloc(sizeof(t_numberlist));
	lastlist -> content = i;
	lastlist -> next = *lsta;
	*lsta = lastlist;
}
