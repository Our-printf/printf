/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:47:54 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/22 00:05:07 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		ft_clean(t_print res)
{
	write(1, res.buf, res.length);
	ft_bzero(res.buf, BUFF_SIZE);
	res.length_write += res.length;
	res.length = 0;
	return (res);
}

t_print		ft_strcat_f(char *s1, t_print res, char c)
{
	int i;

	i = 0;
	if (!c && s1)
	{
		while (s1[i])
		{
			if (res.length == BUFF_SIZE - 1)
				res = ft_clean(res);
			res.buf[res.length] = s1[i];
			i++;
			res.length++;
			if (res.length == BUFF_SIZE - 1)
				res = ft_clean(res);
		}
	}
	else
	{
		if (res.length == BUFF_SIZE - 1)
			res = ft_clean(res);
		res.buf[res.length] = c;
		res.length++;
	}
	return (res);
}
