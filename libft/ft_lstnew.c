/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 16:15:35 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/14 18:22:18 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(1 * sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		lst->content_size = 0;
		lst->content = NULL;
	}
	if (content)
	{
		if (!(lst->content = (void*)malloc((content_size))))
		{
			free(lst);
			return (NULL);
		}
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
