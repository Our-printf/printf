/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:54:56 by sgarcia           #+#    #+#             */
/*   Updated: 2018/01/04 15:04:14 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (i > len)
				return (NULL);
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
		}
		if (j > 0)
			i -= j - 1;
		if (j == 0)
			i++;
	}
	return (NULL);
}
