/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 10:43:17 by sgarcia           #+#    #+#             */
/*   Updated: 2018/02/07 10:44:08 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup_free(char *s1)
{
	int		i;
	int		nb;
	char	*str;

	if (!s1)
		return (NULL);
	nb = ft_strlen(s1);
	if ((str = (char *)malloc((nb + 1) * sizeof(char))) == 0)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	ft_strdel(&s1);
	str[i] = '\0';
	return (str);
}
