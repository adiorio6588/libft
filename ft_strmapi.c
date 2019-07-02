/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:06:17 by adiorio           #+#    #+#             */
/*   Updated: 2018/12/05 21:07:21 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = -1;
	if (s && f)
	{
		if (!(newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[++i])
			newstr[i] = (*f)(i, s[i]);
		newstr[i] = '\0';
	}
	else
		return (NULL);
	return (newstr);
}
