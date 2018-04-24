/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:11:17 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/02 21:07:04 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	t_u8	*copy;
	t_u8	occ;

	i = 0;
	copy = (t_u8 *)s;
	occ = c;
	while (i < n)
	{
		if (copy[i] == occ)
			return (&copy[i]);
		i++;
	}
	return (NULL);
}
