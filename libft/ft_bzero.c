/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 11:06:08 by adrida            #+#    #+#             */
/*   Updated: 2019/04/23 13:19:09 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_bzero(void *sl, size_t n)
{
	while (n >= sizeof(long))
	{
		n -= sizeof(long);
		*((long*)(sl + n)) = 0;
	}
	while (n >= sizeof(int))
	{
		n -= sizeof(int);
		*((int*)(sl + n)) = 0;
	}
	while (n >= sizeof(short))
	{
		n -= sizeof(short);
		*((short*)(sl + n)) = 0;
	}
	while (n > 0)
	{
		--n;
		((char*)sl)[n] = 0;
	}
}
