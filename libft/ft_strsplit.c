/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 12:43:44 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/11 17:40:33 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	copy_words(char const *str, char c, char **copy)
{
	size_t	i;
	size_t	len_words;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			len_words = 0;
			while (str[i] && str[i] != c)
			{
				copy[words][len_words] = str[i];
				i++;
				len_words++;
			}
			words++;
		}
	}
}

static	void	lenght_words(char const *str, char c, char **copy)
{
	size_t	i;
	size_t	len_words;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			len_words = 0;
			while (str[i] && str[i] != c)
			{
				i++;
				len_words++;
			}
			copy[words] = ft_strnew(len_words);
			words++;
		}
	}
}

static	int		count_words(char const *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			while (str[i] && str[i] != c)
				i++;
			words++;
		}
	}
	return (words);
}

char			**ft_strsplit(char const *str, char c)
{
	size_t	i;
	size_t	words;
	char	**copy;

	if (!str || !c)
		return (NULL);
	i = 0;
	copy = NULL;
	words = count_words(str, c);
	if ((copy = (char **)malloc(sizeof(char *) * (words + 1))) == NULL)
		return (NULL);
	copy[words] = NULL;
	lenght_words(str, c, copy);
	copy_words(str, c, copy);
	return (copy);
}
