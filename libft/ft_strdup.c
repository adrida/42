/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:19:12 by adrida            #+#    #+#             */
/*   Updated: 2019/04/22 12:21:36 by adrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*s;
	int		len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		s[len] = s1[len];
		len++;
	}
	s[len] = '\0';
	return (s);
}
