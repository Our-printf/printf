/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:58:10 by rojaguen          #+#    #+#             */
/*   Updated: 2017/11/25 02:39:46 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*shr;
	size_t			i;

	i = 0;
	shr = (unsigned char*)s;
	while (i < n)
	{
		if (*shr == (unsigned char)c)
			return (shr);
		shr++;
		i++;
	}
	return (NULL);
}
