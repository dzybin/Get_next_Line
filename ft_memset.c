/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:20:44 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:45:32 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)dest;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	dest = d;
	return (dest);
}
/*
int	main()
{
	char	dest[] = "helo poul;k";
		printf("%s\n", dest);
	ft_memset(dest, 'k', 5);
	printf("ft_memset %s\n", dest);
	memset(dest, '1', 5);
	printf("origin %s\n", dest);
			return (0);
}
*/
