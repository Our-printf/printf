/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:40:23 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/26 18:12:22 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		if_forest(char c, va_list ap, t_print res)
{
printf ("\nsharp = %d\nzero = %d\nneg = %d\npos = %d\nspace = %d \nj = %d\nz = %d\nh = %d\nl = %d\npoint = %d\nweed = %d\n",res.c_bool.sharp, res.c_bool.zero, res.c_bool.neg, res.c_bool.pos, res.c_bool.space, res.c_bool.j, res.c_bool.z, res.c_bool.h, res.c_bool.l, res.c_bool.point, res.c_bool.width);
	
	printf("\nc = %c\n", res.c_bool.c);
//	if (!c)
//		res.k = res.k - res.save_i;
	if (c == 's')
		stock_s(ap,res);
	return (res);
}


t_print		distrib(const char *str, va_list ap, t_print res)
{
	res.save_i = res.k;
	if (str[res.k] == '%')
	{
		res.buf[res.i] = '%';
		res.i++;
		return (res);
	}
	while (res.c_bool.check == 0 && str[res.k])
	{
//		printf("\n k = %d\n", res.k);
		res = check_flag(str, res, 0);
		res.k++;
	}

	if (res.c_bool.check == -1)
	{
		res.k = res.save_i;
		return (res);
	}
	if (res.c_bool.h > 0)
		res.c_bool.h = (res.c_bool.h % 2) + 1;// si resultat vaut 1 => pair donc == hh, si resultat vaut 2 => impair donc  == h
	if (res.c_bool.l > 0)
		res.c_bool.l = (res.c_bool.l %  2) + 1;// si resultat vaut 1 => pair donc == ll, si resultat vaut 2 => impair donc  == l
//	printf("c = %c", res.c_bool.c);
	if_forest(res.c_bool.c,ap,res);
	return (res);
}

int		ft_printf(const char *str, ...)
{
	va_list		ap;
	t_print		res;

	if (!str)
		return(0);
	res.i = 0;
	res.k = 0;
	va_start(ap, str);
	ft_bzero(res.buf, BUFF_SIZE);
	while (str[res.k])
	{
		if (str[res.k] == '%')
		{
			res.k++;
			res = init_bool(res);
			res =distrib(str,ap,res);// faire en sorte que a fonction renvoi un pointeur sapres le type du '%'
		}
		else 
		{
			ft_putchar(str[res.k]);
			res.buf[res.i++] = str[res.k++];
		}
	}

//printf ("\nsharp = %d\nzero = %d\nneg = %d\npos = %d\nspace = %d \nj = %d\nz = %d\nh = %d\nl = %d\npoint = %d\nweed = %d\n",res.c_bool.sharp, res.c_bool.zero, res.c_bool.neg, res.c_bool.pos, res.c_bool.space, res.c_bool.j, res.c_bool.z, res.c_bool.h, res.c_bool.l, res.c_bool.point, res.c_bool.width);
va_end(ap);
	return (res.i);
}
