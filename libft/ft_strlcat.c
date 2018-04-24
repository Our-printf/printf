/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 21:35:09 by sgarcia           #+#    #+#             */
/*   Updated: 2018/01/04 14:42:43 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (size == 0)
		return (ft_strlen(src) + size);
	while (dst[i] && i < size)
		i++;
	while (src[k] && (i + k) < size - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i < size)
		dst[i + k] = '\0';
	return (i + ft_strlen(src));
}
