/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:52:27 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/29 02:52:28 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
