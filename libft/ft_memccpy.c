/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:41:39 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 13:42:53 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void	*restrict d, const void	*restrict s, int c, size_t n)

{
	unsigned int	i;
	unsigned char	cmp;
	unsigned char	*dst;
	unsigned char	*source;

	if (n != 0)
	{
		i = 0;
		cmp = (unsigned char)c;
		dst = (unsigned char*)d;
		source = (unsigned char*)s;
		while (i < n)
		{
			dst[i] = source[i];
			if (source[i] == cmp)
				return (dst + i + 1);
			i++;
		}
	}
	return (NULL);
}
