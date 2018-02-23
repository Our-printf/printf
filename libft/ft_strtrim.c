/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:43:06 by rojaguen          #+#    #+#             */
/*   Updated: 2017/11/27 15:11:19 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_i(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

static int		ft_a(char const *s)
{
	int a;

	a = ft_strlen(s) - 1;
	while (s[a] == ' ' || s[a] == '\t' || s[a] == '\n')
		a--;
	return (a + 1);
}

char			*ft_strtrim(char const *s)
{
	char	*tab;
	size_t	n;
	size_t	a;
	int		i;

	n = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	n = ft_i(s);
	a = ft_a(s);
	if (a == 0)
	{
		tab = (char*)malloc(sizeof(char) * 1);
		tab[0] = '\0';
		return (tab);
	}
	if ((tab = (char*)ft_strnew(a - n)) == NULL)
		return (0);
	while (n < a && a != 1)
		tab[i++] = s[n++];
	tab[i] = '\0';
	return (tab);
}
