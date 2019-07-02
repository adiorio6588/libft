/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:27:38 by adiorio           #+#    #+#             */
/*   Updated: 2018/12/01 21:28:34 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_node;

	if (!(new_node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		if (!(new_node->content = malloc(content_size)))
		{
			free(new_node);
			return (NULL);
		}
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	new_node->next = NULL;
	return (new_node);
}
