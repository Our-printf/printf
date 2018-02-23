/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:16:11 by rojaguen          #+#    #+#             */
/*   Updated: 2017/11/29 16:32:33 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while ((haystack[i + j] == needle[j])
					&& (needle[j]) && (i + j) < len)
				j++;
			if (j == ft_strlen(needle))
				return ((char*)&haystack[i]);
			j = 0;
			i++;
		}
		else
			i++;
	}
	return (NULL);
}
