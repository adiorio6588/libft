/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:38:16 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 20:39:06 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int k;

	k = 0;
	i = ft_strlen(s1);
	while (s2[k] && k < (int)n)
		s1[i++] = s2[k++];
	s1[i] = '\0';
	return (s1);
}