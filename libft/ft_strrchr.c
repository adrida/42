/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:30:18 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 16:30:46 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	unsigned int	i;
	char	*src;

	i = ft_strlen(s);
	src = (char *)s;
  if (c == '\0' && s != NULL)
    return ((char *)s + ft_strlen(s));
	while (i > 0)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i--;
	}
  if(src[0] == (unsigned char)c)
    return (src);
	return (NULL);
}
