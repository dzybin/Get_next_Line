#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define	BUF_SIZE 30

char	*get_string_from_file(int fd)
{
	int	bytes;
	char	buf[BUF_SIZE + 1];
	char	*str;
	int	i;

	bytes = read(fd, buf, BUF_SIZE);
	buf[bytes] = '\0';
	str = malloc(BUF_SIZE + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (buf[i])
	{
		str[i] = buf[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
char	*ff_find_return(int fd)
{
	int 	i;
	char	*line;
	char	*str;
	
//	bytes = read(fd, buf, BUF_SIZE);
	str = get_string_from_file(fd);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
// on allue memoire a la partie de la ligne jusqu'a \n et on la sauve dans une variable
		line = malloc(i + 2); //i + 2 pour \n et \0
	if (!line)
		return (NULL);
	line[i + 1] = '\0'; 
// on se trouve a l'emplacement de \n
	while (i >= 0)
	{
// on copie la ligne a l'envers pour la recuperer
		line[i] = str[i];
		i--;
	}
	return (line);
}
//char	*get_first_line(int ft)

int	main ()
{
	char	buf[BUF_SIZE];
	char 	*line;
	int	fd;
	char	c = '\n';

	fd = open("toto.txt", O_RDONLY);
	line = ff_find_return(fd);
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
