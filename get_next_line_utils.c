/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:00:40 by dzybin            #+#    #+#             */
/*   Updated: 2022/03/28 17:31:22 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_clean_line(char *str)
{
	char	*line;
	int	i;

	i = 0;
	if (!(str[i]))
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2)); // '\n' et '\0' ??
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n' && str[i] != EOF)
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_lasttxt(char *str)
{
	int		i;
	int		j;
	char	*laststr;

	i = 0;
	j = 0;
	if (!str)
		return(NULL);
	while (str[i] && (str[i] != '\n'))
		i++;
	if (!str[i])
	{
		free(str);
		return(NULL);
	}
	laststr = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1)); //pourquoi -i +1 ?
	if (!laststr)
		return (NULL);
	i++;
	while (str[i])
		laststr[j++] = str[i++]; // a quoi sert "j" ?
	laststr[j] = '\0';
	free(str);
	return (laststr);
}

int	ft_ischar(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*strnew;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	strnew = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (strnew == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			strnew[i] = s1[i];
	while (s2[j] != '\0')
		strnew[i++] = s2[j++];
	strnew[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (strnew);
}
