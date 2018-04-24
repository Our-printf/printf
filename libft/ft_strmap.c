/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:47:44 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/06 10:39:31 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		copy[i] = f(copy[i]);
		i++;
	}
	return (copy);
}
