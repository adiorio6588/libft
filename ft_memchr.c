/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:18:25 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 20:19:01 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*chr;

	chr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (chr[i] == (unsigned char)c)
			return ((void *)&chr[i]);
		i++;
	}
	return (NULL);
}
