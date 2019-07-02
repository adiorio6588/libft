/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:53:38 by adiorio           #+#    #+#             */
/*   Updated: 2018/11/04 20:57:38 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t j;
	size_t c;

	j = 0;
	c = 0;
	if (haystack[j] == needle[j] && haystack[j] == '\0')
		return ((char*)&haystack[j]);
	while (haystack[j])
	{
		c = j;
		while (haystack[c] == needle[c - j] && haystack[c])
			c++;
		if (needle[c - j] == '\0')
			return ((char*)&haystack[j]);
		j++;
	}
	return (NULL);
}
