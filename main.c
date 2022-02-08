/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:14:17 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/14 13:06:26 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int     ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *	ft_strnstr(const char *big, const char *little, size_t len);
int ft_atoi(const char *nptr);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char   *ft_strtrim(char const *s, char const *set);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    ft_strnew(size_t size);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

//int main(int argc, char **argv)
//int main()
//{
//(void)argc;
//	printf("ft_isalpha -> %d\n", ft_isalpha((unsigned char) argv[1][0]));
//	printf("%d\n", isalpha((unsigned char) argv[1][0]));
//	printf("ft_isdigit -> %d\n", ft_isdigit((unsigned char) argv[1][0]));
//	printf("%d\n", isdigit((unsigned char) argv[1][0]));
//	printf("ft_isalnum -> %d\n", ft_isalnum((unsigned char) argv[1][0]));
//	printf("%d\n", isalnum((unsigned char) argv[1][0]));
//printf("ft_isascii -> %d\n", ft_isascii((unsigned char) argv[1][0]));
//printf("%d\n", isascii((unsigned char) argv[1][0]));
//	printf("ft_isprint -> %d\n", ft_isprint((unsigned char) argv[1][0]));
//	printf("%d\n", isprint((unsigned char) argv[1][0]));

// STRLEN
//	printf("ft_strlen -> %zu\n", ft_strlen(argv[1]));
//	printf("%zu\n", strlen(argv[1]));

//STRLCPY
//	char	dest1[] = "bonjour";
//	const char	src1[] = "hellololo";
//	ft_strlcpy(dest1, src1, 4);
//	printf("ft->  %s\n", dest1);
//	char	dest2[] = "bonjour";
//	const char	src2[] = "hellololo";
//	strlcpy(dest2, src2, 4);
//	printf("ft->  %s\n", dest2);
//	return (0);

//STRLCAT
//	char	dest1[] = "bonjour";
//	const char	src1[] = "hellololo";
//	size_t str1;
//	size_t str2;

//	str1 = ft_strlcat(dest1, src1, 2);
//	printf("ft_str -> %ld %s\n",str1, dest1);


//	char	dest2[] = "bonjour";
//	const char	src2[] = "hellololo";
//	str2 = strlcat(dest2, src2, 2);
//	printf("origin ->%ld  %s\n",str2, dest2);
//	return (0);



//	TOUPPER
//int	c;
//int	c2;

//c = 'g';
//c2 = 'g';
//printf("ft -> %c \n", ft_toupper(c));
//printf("or -> %c \n", toupper(c2));
//return (0);

//MEMCHR
//char c[] = "vouvi";
//printf("ft -> %s \n", (char*) ft_memchr(c,'o', 1));
//printf("or -> %int	ft_strncmp(const char *s1, const char *s2, size_t n)s \n",   (char*) memchr(c,'o', 1));
//return (0); 

//MEMCMP

//unsigned char	c1[] = "zobongour";
//unsigned char	c2[] = "bobongour";
//unsigned char	c3[] = "bobongour";
//unsigned char	c4[] = "zobongour";
//printf("ft - > %d \n", ft_memcmp(c1, c2, 6));	
//printf("ft - > %d \n", memcmp(c3, c4, 6));	
//}

//STRNSTR
//char	big[] = "je veux dormir";
//char	big1[] = "je veux dormir";
//char	little1[] = "veux";
//char	little[] = "";

//printf("ft -> %s \n", ft_strnstr(big, little, 5));
//printf("or -> %s \n", strnstr(big1, little1, 5));
//return (0);

//ATOI
//const char	nptr[] = "00";
//const char	nptr1[] = "00";
//printf("ft -> %d \n",ft_atoi(nptr));
//printf("or -> %d \n", atoi(nptr1));
//return (0);

//SUBSTR
//const char	str[] = "esquisse d'une theorie des emotions";

//printf("my string %s\n", ft_substr(str, 5, 9));

//STRJOIN

//char const	s1[] = "c'est genial";
//char const	s2[] = "d'etre stud";
//printf("%s\n", ft_strjoin(s1, s2));

//STRTRIM
//char const	*s = "pas je suis content pas";
//char const	*set = "spa";
//printf("%s\n", ft_strtrim(s, set));

//STRMAPI

/*
   static char	ft_plusn(unsigned int n, char c)
   {
   n = 2;
   c = c + n;
   return (c);

   }

   int	main()
   i{
   const char	*s = "0123";
   ft_strmapi(s, ft_plusn);
   printf("%s\n", s);
   return(0);
   }
 */

//STRITERI
/*
static void     ft_toup(unsigned int n, char *c)
{
	int	i = 0;



		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		
		}
	
}
int	main()
{
	char	s[4] = "fgh";
	char	*str;
	int	i = 0;

	while (s[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	ft_striteri(str, ft_toup);
	printf("%s\n", str);
	return (0);
}
*/
		//PUTCHAR FD
/*
   int	main()
   {
   char	c = 'f';
   int	fd;

	ft_putchar_fd(c, fd);
   return(0);
   }
*/

		//PUTSTR_FD
/*
int	main()
{
char	c[] = "lhlkjh";
int	fd = 1;

	ft_putstr_fd(c, fd);
	return (0);
}
*/

		//FTPUTENDL_FD
/*
int	main()
{
	char	c[] = "lh";
	int	fd = 1;

	ft_putendl_fd(c, fd);
	return (0);
}
*/
		//PUTNUBR_FD

int	main()
{
	int	n = '2';
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}
