#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char	*get_the_rest(char *hole_string, char c)
{
	int	i;
	
	i = 0;
	while (hole_string[i] != c && hole_string[i])
		i++;
	if (hole_string[i] == c)
		save_start = malloc(i + 2);
	if (!save_start)
		return (NULL);
	save_start[i] = n;
	while (hole_string[i])
	{
		if (hole_string[i] == n)
			save_rest = malloc
		save_rest[i] = hole_string[i]
		i--;
	}
}

int	main ()
{
	char	str[] = "ghki\ngkhsg\nkakjhhkjh";
	char 	c = '\n';
	int	i = 0;

	printf("%s", get_the_rest(str, c));
	return (0);
}
