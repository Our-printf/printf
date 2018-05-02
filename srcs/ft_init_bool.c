/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:24:19 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/28 13:28:45 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		init_struct(t_print res)
{
	res.i = 0;
	res.length = 0;
	res.length_write = 0;
	ft_bzero(res.buf, BUFF_SIZE);
	return (res);
}

t_print		init_bool(t_print res)
{
	res.c_bool.sharp = 0;
	res.c_bool.zero = 0;
	res.c_bool.neg = 0;
	res.c_bool.pos = 0;
	res.c_bool.space = 0;
	res.c_bool.j = 0;
	res.c_bool.z = 0;
	res.c_bool.h = 0;
	res.c_bool.l = 0;
	res.c_bool.point = -1;
	res.c_bool.width = 0;
	res.c_bool.check = 0;
	res.c_bool.specs = 0;
	return (res);
}

char		*width(char *str, int size, int index, char c)
{
	int		i;

	i = 0;
	while (i < size)
	{
		str[index + i] = c;
		i++;
	}
	str[index + i] = '\0';
	return (str);
}
