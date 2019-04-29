/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 12:54:00 by adrida            #+#    #+#             */
/*   Updated: 2019/04/25 12:54:08 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst;
	size_t len_src;
	
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		return (size + len_src);
	ft_strncat(dst,src,(size - len_dst - 1));
	return (len_src + len_dst);
}
/*
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t	i;
	size_t j;

	i = 0;
	j = 0;
	//size : taille de la chaine totale pas juste taille de src
    if (((size_t)ft_strlen(src) > size)|| ((size_t)ft_strlen(dst) > size))
        return (size + (size_t)ft_strlen(src));
	if (size == 0)
	{
		dst = "";
		return (0);
	}
	while (dst[i] != '\0')
		i++;
	while ((j + i  < size) && (src[j] != '\0'))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return ((size_t)ft_strlen((char *)dst));
}

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	//size : taille de la chaine totale pas juste src
	size_t i;
	size_t offset;
	size_t srclen;

	offset = 0;
	while (dst[offset] != '\0')
		offset++;
	i = 0;
	srclen = 0;
	while (src[i] != '\0' && offset + i < size - 1)
	{
		if (size != 0)
			dst[offset + i] = src[i];
		i++;
		srclen++;
	}
	if (size != 0)
		dst[offset + i] = '\0';
	while (src[srclen] != '\0')
		srclen++;
	if (size < offset)
		return (srclen + size);
	return (offset + srclen);
}
*/