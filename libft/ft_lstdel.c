/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 12:24:22 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/15 14:30:07 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*save;

	if (alst)
	{
		while (*alst)
		{
			save = *alst;
			(*alst) = (*alst)->next;
			del((save)->content, (save)->content_size);
			free(save);
		}
		*alst = NULL;
	}
}
