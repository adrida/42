/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 14:03:59 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 14:54:57 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memchr(const void	*s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (((int	*)s)[i] != c && i < n)
		i++;
	if (((int	*)s)[i] == c)
		return ((int	*)s + i);
	return (NULL);
}
*/
void	*ft_memchr(const void	*s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char*)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}
