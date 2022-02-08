#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 5000

char	*get_next_line(int fd, char *buf)

{
//char	buf[BUF_SIZE + 1];
int	bytes;

bytes = read(fd, buf, BUF_SIZE);
buf[bytes] = '\0';
return (buf);
}

int	main()
{
int 	fd;
char	*line;
char	buf[BUF_SIZE + 1];
fd = open ("toto.txt", O_RDONLY);
line = get_next_line(fd, buf);
//bytes = read(fd, buf, BUF_SIZE);
printf("%s\n", line); 
return(0);
}
