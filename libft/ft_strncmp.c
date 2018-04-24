/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:17:01 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/11 18:59:03 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	j = 0;
	if (!n)
		return (0);
	while (str1[i] || str2[i])
	{
		j = str1[i] - str2[i];
		i++;
		if (j != 0)
			return (j);
		if (i >= n)
			return (0);
	}
	return (0);
}
