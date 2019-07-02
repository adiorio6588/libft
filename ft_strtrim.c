/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:47:26 by adiorio           #+#    #+#             */
/*   Updated: 2018/12/05 20:22:29 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*trimmed;
	int		i;
	int		j;
	int		len;

	i = -1;
	j = -1;
	if (!s)
		return (NULL);
	len = (int)ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len < 0)
		len = 0;
	if (!(trimmed = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s += i;
	while (++j < len)
		trimmed[j] = *s++;
	trimmed[j] = '\0';
	return (trimmed);
}
