/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:17:01 by dzybin            #+#    #+#             */
/*   Updated: 2022/02/08 14:30:56 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
/*
int	main()
{
	char	*s;

	s = "je ne \n travailler";
	printf("%s\n", ft_strchr(s, '\n'));
	return(0);
}
*/
