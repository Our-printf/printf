/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:27:41 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/11 15:14:35 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*emptystr(char *copy)
{
	if (!(copy = ft_strnew(0)))
		return (NULL);
	copy[0] = '\0';
	return (copy);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*copy;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s) - 1;
	while (s[j] && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j++;
	while (s[k] && (s[k] == ' ' || s[k] == '\n' || s[k] == '\t'))
		k--;
	copy = NULL;
	if (j >= k + 1)
		return (copy = emptystr(copy));
	if (!(copy = ft_strnew((k + 1) - j)))
		return (NULL);
	while (j < k + 1)
		copy[i++] = s[j++];
	copy[i] = '\0';
	return (copy);
}
