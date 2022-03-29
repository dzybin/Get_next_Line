/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:27:44 by dzybin            #+#    #+#             */
/*   Updated: 2022/03/29 16:30:54 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*ft_get_str(int fd, char *bufftxt)
{
		char	*buffer;
		int		position;

		buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buffer)
			return (NULL);
		position = 1;
		while (!ft_ischar(bufftxt, '\n') && position != 0)
		{
			position = read(fd, buffer, BUFFER_SIZE);
			if (position == -1)
			{
				free(buffer);
				return(NULL);
			}
			buffer[position] = '\0';
			bufftxt = ft_strjoin(bufftxt, buffer);
		}
		free(buffer);
		return(bufftxt);
}
char	*get_next_line(int fd)
{
	static char	*bufftxt;
	char		*finalline;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	bufftxt = ft_get_str(fd, bufftxt);
	if (!bufftxt)
		return(NULL);
	finalline = "";
	finalline = ft_clean_line(bufftxt);
	bufftxt = ft_lasttxt(bufftxt);
	return (finalline);
}

int	main()
{
	int	fd;
	char	*line;

	fd = open("text_to_test.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return(0);
}
