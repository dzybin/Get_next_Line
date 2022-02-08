/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_first_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:37:41 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:38:55 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*find_return(char *str, char c)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (str[i] == c)
// on allue memoire a la partie de la ligne jusqu'a \n et on la sauve dans une variable
		s = malloc(i + 2); //i + 2 pour \n et \0
	if (!s)
		return (NULL);
	s[i + 1] = '\0'; 
// on se trouve a l'emplacement de \n
	while (i >= 0)
	{
// on copie la ligne a l'envers pour la recuperer
		s[i] = str[i];
		i--;
	}
	return (s);
}
//char	*get_first_line(int ft)

int	main ()
{
	char	str[] = "ghki\ngkhsg\nkakjhhkjh";
	char 	c = '\n';
	int	i = 0;

	printf("%s", find_return(str, c));
	return (0);
}
