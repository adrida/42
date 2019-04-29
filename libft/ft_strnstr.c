/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:42:26 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 16:42:34 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
	size_t i2;

	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		i2 = 0;
		while (haystack[i + i2] == needle[i2] && haystack[i + i2])
			i2++;
		if (needle[i2] == '\0')
			return ((char*)haystack + i);
		i++;
	}
	if (needle[0] == '\0')
		return ((char*)haystack);
	return (NULL);
}
