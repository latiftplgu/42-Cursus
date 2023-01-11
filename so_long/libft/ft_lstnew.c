/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:52:02 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/29 02:52:03 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = (t_list *)malloc(sizeof(t_list) * 1);
	if (root == NULL)
		return (0);
	root -> content = content;
	root -> next = NULL;
	return (root);
}
