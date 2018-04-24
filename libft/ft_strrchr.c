/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:24:06 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/15 21:35:02 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	char	ch;

	ch = c;
	i = ft_strlen(s) - 1;
	if (c == 0)
		return ((char*)&s[i + 1]);
	j = 0;
	while ((int)i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
