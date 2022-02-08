/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:55:37 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/14 13:59:50 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

size_t	word_count(char *str, char c)
{
	size_t	i = 0;
	size_t	wcount = 0;

	while (str[i])
	{
		while (str[i] != c && str[i])
			i++;
		if (str[i] ==  c && str[i])
			wcount++;
		while (str[i] == c && str[i])
			i++;
//	while (str[i] && str[i] != c)
	}
	return (wcount);
}

int	main()
{
	char str[] = "je ne veux pas travailler je ne veux pas dejeuner";
	char	c = 'x';
	printf("%ld\n", word_count(str, c));
	return (0);
}

