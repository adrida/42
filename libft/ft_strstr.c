/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:41:35 by adrida            #+#    #+#             */
/*   Updated: 2019/04/22 12:51:12 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int i2;

	i = 0;
	while (haystack[i] != '\0')
	{
		i2 = 0;
		while (haystack[i + i2] == needle[i2] && haystack[i + i2])
			i2++;
		if (needle[i2] == '\0')
			return ((char*)haystack + i);
		i++;
	}
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char*)haystack);
	return (NULL);
}
