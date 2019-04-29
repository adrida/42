/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:21:59 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 13:35:11 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*restrict dst, const void	*restrict src, size_t n)
{
	while (n >= sizeof(long))
	{
		n -= sizeof(long);
		*((long*)(dst + n)) = *((long*)(src + n));
	}
	while (n >= sizeof(int))
	{
		n -= sizeof(int);
		*((int*)(dst + n)) = *((int*)(src + n));
	}
	while (n >= sizeof(short))
	{
		n -= sizeof(short);
		*((short*)(dst + n)) = *((short*)(src + n));
	}
	while (n > 0)
	{
		--n;
		((char*)dst)[n] = ((char*)src)[n];
	}
	return (dst);
}
