/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:55:30 by adiorio           #+#    #+#             */
/*   Updated: 2018/12/05 21:34:59 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(const char *str, char c)
{
	int i;
	int wct;

	i = 0;
	wct = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			++wct;
		i++;
	}
	return (wct + 1);
}

static int		ft_wordlen(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != c && *str)
	{
		str++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !c || !(split = (char **)malloc(
					sizeof(char *) * ft_wordcount(s, c))))
		return (NULL);
	while ((size_t)j < ft_strlen(s))
	{
		while (s[j] && s[j] == c)
			j++;
		k = j;
		while (s[j] && s[j] != c)
			j++;
		if (k < j)
		{
			split[i] = ft_strnew(ft_wordlen((char *)s + k, c));
			ft_strncpy(split[i++], (char *)s + k, j - k);
		}
	}
	split[i] = NULL;
	return (split);
}
