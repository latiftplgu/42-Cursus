/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:52:12 by ltopluog          #+#    #+#             */
/*   Updated: 2022/10/16 00:17:34 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char	*parse(char *line, char s)
{
	char	*str;

	while (*line != '\0' && *line != s)
		line++;
	if (!line)
	{
		free(line);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(line) - *(line)) + 1);
	if (!str)
		return (NULL);
	line++;
	while (*line)
	{
		*str = *line;
		line++;
		str++;
	}
	*str = '\0';
	free(line);
	return (str);
}

static char	*newline(char *line, char s)
{
	char	*str;
	int		i;

	i = 0;
	if (!*line)
		return (NULL);
	while (*line != '\0' && *line != s)
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	while (*line && *line != s)
	{
		*str = *line;
		str++;
		line++;
	}
	if (*line == s)
		*str = s;
	str++;
	*str = '\0';
	return (str);
}

static char	*nextl(int fd, char *line)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!str)
		return (0);
	i = 1;
	while (!ft_strchr(line, '\n') && i != 0)
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i == -1)
		{
			free(str);
			return (NULL);
		}
		str[i] = '\0';
		line = ft_strjoin(line, str);
	}
	free(str);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = nextl(fd, line);
	if (line)
	{
		str = newline(line, '\n');
		line = parse(line, '\n');
		return (str);
	}
	return (NULL);
}
