/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:31:37 by rojaguen          #+#    #+#             */
/*   Updated: 2017/11/27 15:12:10 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_find_space(char const str, char c)
{
	if (str == c || str == '\0')
		return (1);
	else
		return (0);
}

static char		*ft_alloc_tab(char *tab, char const *str, char c)
{
	int i;

	i = 0;
	while (ft_find_space(str[i], c) == 0)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

static int		ft_count(char const *str, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (ft_find_space(str[i], c) == 0 && ft_find_space(str[i + 1], c) == 1)
			word++;
		i++;
	}
	return (word);
}

static int		ft_strlon(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**p;

	i = 0;
	if (!s || !c || !(p = (char**)malloc(sizeof(*p) * (ft_count(s, c) + 1))))
		return (NULL);
	j = 0;
	while (s[i])
	{
		if (ft_find_space(s[i], c) == 0)
		{
			len = ft_strlon(s + i, c);
			p[j] = (char*)malloc(sizeof(p) * (len + 1));
			ft_alloc_tab(p[j], (s + i), c);
			i = i + len;
			j++;
		}
		else
			i++;
	}
	p[j] = 0;
	return (p);
}
