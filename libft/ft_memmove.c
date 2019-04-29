/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:57:56 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 13:57:57 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*destination;
	unsigned char	*source;

	if (n != 0)
	{
		if (dest < src)
			ft_memcpy(dest, src, n);
		else
		{
			destination = (unsigned char*)dest;
			source = (unsigned char*)src;
			i = n;
			while (i != 0)
			{
				i--;
				destination[i] = source[i];
			}
		}
	}
	return (dest);
}
