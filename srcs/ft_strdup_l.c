/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:42:06 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/18 18:40:52 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_strdup_l(char *s1)
{
	int		i;
	char	*str;

	i = 0;
	if ((str = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	free(&s1);
	return (str);
}
