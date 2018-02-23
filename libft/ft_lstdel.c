/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 02:17:40 by rojaguen          #+#    #+#             */
/*   Updated: 2017/11/29 03:57:40 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;

	if (alst == NULL || del == NULL || *alst == NULL)
		return ;
	lst = *alst;
	while (*alst)
	{
		*alst = (*alst)->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = *alst;
	}
}
