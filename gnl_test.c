/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:40:53 by dzybin            #+#    #+#             */
/*   Updated: 2022/02/09 13:04:02 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "../Libft_Final/FINAL_PUSH/libft.h"

int	ft_gnl(int fd, char **line)
{
	char	buf[10 + 1];
	int	nb_read_bytes;
	char	*ptr_to_n;
	int	flag;
	static char	*reminder;

	flag = 1;
	if(reminder)
		*line = ft_strdup(reminder);
	else
		*line = "\0";
//		*line = ft_strnew(1);
	while(flag && (nb_read_bytes = read(fd, buf, 10)))
	{
		if((ptr_to_n = ft_strchr(buf, '\n')))	/*/renvoie tout ce qui est apres \n*/
		{
			*ptr_to_n = '\0'; 	/*//met \0 a la place de \n*/
			flag = 0;		/*/sort de la boucle*/
			ptr_to_n++;
			reminder = ft_strdup(ptr_to_n);
		}
//		buf[nb_read_bytes] = '\0';
		*line = ft_strjoin(*line, buf);
		/*met tout ce qui est avant \0 dans *line*/
	}
		return (0);
}

int	main()
{
	char	*line;
	int	fd;

//	line = "lkjh";
	fd = open("text_to_test.txt", O_RDONLY);
	ft_gnl(fd, &line);
	printf("%s\n", line);

	ft_gnl(fd, &line);
	printf("%s\n",line);
	return (0);
}
