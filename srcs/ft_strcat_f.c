/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:47:54 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/28 20:10:28 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		ft_strcat_f(char *s1, t_print res, char c)
{
	int i;
	int a;

	i = 0;
	a = ft_strlen(res.buf);
	if (!c)
	{
		while (s1[i])
		{
			res.buf[a] = s1[i];
			a++;
			i++;
		}
	}
	if (c)
	{
		res.buf[a] = c;
		return(res);
	}
	return (res);
}
