/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:17:00 by ltopluog          #+#    #+#             */
/*   Updated: 2022/10/13 17:38:46 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s && s[i] != '\0') || (c == '\0'))
	{
		if (s[i] == (unsigned char)(c))
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
