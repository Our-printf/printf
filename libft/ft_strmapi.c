/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:21:17 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/06 10:39:50 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*copy;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	copy = ft_strnew(j);
	if (!(copy = ft_strdup(s)))
		return (NULL);
	while (copy[i])
	{
		copy[i] = f(i, copy[i]);
		i++;
	}
	return (copy);
}
