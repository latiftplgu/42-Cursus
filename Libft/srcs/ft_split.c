/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:34:37 by ltopluog          #+#    #+#             */
/*   Updated: 2022/10/09 22:07:11 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stdio.h"
#include "../incs/libft.h"

int	wordcount(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			while (*str != c && *str)
				str++;
			i++;
		}
	}
	return (i);
}

char	**ft_split(char const *str, char c)
{
	int		index;
	int		j;
	char	**s;

	index = 0;
	if (!str)
		return (NULL);
	s = (char **)ft_calloc(sizeof(char *), wordcount(str, c) + 1);
	if (!s)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			j = 0;
			--str;
			while (*(++str) && *(str) != c)
				j++;
			s[index] = (char *)malloc(sizeof(char) * (j + 1));
			ft_strlcpy(s[index++], str - j, j + 1);
		}
	}
	return (s);
}
