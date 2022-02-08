/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:16:42 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:46:07 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = malloc(len * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len);
	return (dup);
}
