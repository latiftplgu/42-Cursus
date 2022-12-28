/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:39 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:39 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_numberlist *lista, t_numberlist *listb)
{
	write (1, "ss\n", 3);
	sa(&lista);
	sb(&listb);
}

void	rr(t_numberlist **lista, t_numberlist **listb)
{
	write (1, "rr\n", 3);
	ra(lista);
	rb(listb);
}

void	rrr(t_numberlist **lista, t_numberlist **listb)
{
	write (1, "rrr\n", 4);
	rra(lista);
	rrb(listb);
}
