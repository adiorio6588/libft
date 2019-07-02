/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:44:44 by adiorio           #+#    #+#             */
/*   Updated: 2018/12/05 21:20:58 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*merge;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = 0;
	len += ft_strlen(s1);
	len += ft_strlen(s2);
	if (!(merge = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	ft_strcpy(merge, s1);
	ft_strcat(merge, s2);
	return (merge);
}
