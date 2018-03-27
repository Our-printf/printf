/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:47:54 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/27 19:13:10 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		ft_strcat_f(char *s1, t_print res, char c)
{
	int i;
	int a;

	i = 0;
	a = ft_strlen(res.buf);
	if (!c && s1)
	{
		while (s1[i])
		{
			res.buf[a] = s1[i];
			a++;
			i++;
			res.length++;
		}
	}
	else
	{
		res.buf[res.length] = c;
		res.length++;
	}
	return (res);
}
