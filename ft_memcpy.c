/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:21:05 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 18:27:19 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p_dst;
	char		*p_src;

	i = 0;
	p_src = (char *)src;
	p_dst = (char *)dst;
	while (i < n)
	{
		*(char *)(p_dst + i) = *(char *)(p_src + i);
		i++;
	}
	return (dst);
}
