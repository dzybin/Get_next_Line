/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:08:48 by dzybin            #+#    #+#             */
/*   Updated: 2022/02/07 14:09:23 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
//#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = (char *)malloc((size + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memset(newstr, '\0', size + 1);
	return (newstr);
}
