/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:15:00 by rojaguen          #+#    #+#             */
/*   Updated: 2017/11/25 02:47:31 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int lend;
	int i;
	int max;

	lend = ft_strlen(dst);
	i = 0;
	max = size - 1;
	while (src[i] && ((lend + i) < max))
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	if ((lend + i) > max)
		return (ft_strlen(src) + size);
	return (lend + ft_strlen(src));
}
