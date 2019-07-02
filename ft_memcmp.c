/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:20:59 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 20:21:57 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*s1_p;
	unsigned char		*s2_p;

	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	i = -1;
	while (++i < n)
		if (*(char *)(s1_p + i) != *(char *)(s2_p + i))
			break ;
	if (i == n)
		return (0);
	return (*(unsigned char *)(s1_p + i) - *(unsigned char *)(s2_p + i));
}
