/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 14:50:03 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/15 17:50:46 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*save;

	if (lst && f)
	{
		save = f(lst);
		lst = lst->next;
		if (lst)
			save->next = ft_lstmap(lst, f);
		return (save);
	}
	return (NULL);
}
