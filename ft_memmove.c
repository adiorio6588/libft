/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:15:48 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 20:16:24 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p_src;
	char	*p_dst;

	i = 0;
	p_src = (char *)src;
	p_dst = (char *)dst;
	if (p_src > p_dst)
		while (i < len)
		{
			*(p_dst + i) = *(p_src + i);
			i++;
		}
	else
		while (len-- > 0)
			*(p_dst + len) = *(p_src + len);
	return (dst);
}
