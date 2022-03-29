#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#define BUFFER_SIZE 1

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_get_str(int fd, char *bufftxt);
size_t	ft_strlen(const char *str);
char	*ft_clean_line(char *str);
char	*ft_lasttxt(char *str);
char	*ft_strjoin(char *s1, char *s2);
int	ft_ischar(char *str, char c);

#endif
