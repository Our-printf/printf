/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:24:50 by sgarcia           #+#    #+#             */
/*   Updated: 2018/01/04 15:04:34 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	while (haystack[i] && needle[i] && haystack[i] == needle[i])
		i++;
	if (needle[i] == '\0')
		return (char*)(haystack);
	if (!haystack[i])
		return (0);
	return (ft_strstr(haystack + 1, needle));
}
