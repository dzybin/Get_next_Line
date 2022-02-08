#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1

char	*get_next_line(int fd)
{
	char	buffer[1];
	char	save[100000];
	char	*line;
	int	bytes;
	int	i;

	i = 0;
	bytes = 1;
	while (bytes)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		save[i] = buffer[0];
		i++;
		if (save[i - 1] == '\n')
			break ;
	}
	if (bytes == 0)
		return (NULL);
	save[i] = '\0';
	line = malloc(i + 1);
	i = 0;
	while (save[i])
	{
		line[i] = save[i];
		i++;
	}
	return (line);
}

int	main(void)
{
	char	*line;
	int	fd;
	//int	i;
	fd = open("toto.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
	//	if (line[i] == '\n')
			printf("%s", line);
			free(line);
	}
	close(fd);
	return (0);
}
