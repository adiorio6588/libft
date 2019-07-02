/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:40:53 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 20:43:12 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*d;
	const char		*s;
	size_t			i;
	size_t			d_size;

	s = src;
	d = dst;
	i = size;
	while (*d && i--)
		d++;
	d_size = d - dst;
	i = size - d_size;
	if (!i)
		return (d_size + ft_strlen(((char *)s)));
	while (*s)
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (d_size + (s - src));
}
