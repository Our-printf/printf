/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:40:23 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/27 18:38:40 by sgarcia          ###   ########.fr       */
/*   Updated: 2018/02/28 17:51:54 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		if_forest(char c, va_list ap, t_print res)
{
//	printf("\n********** BOOL TAB **********\n");
//	printf ("\nsharp = %d\nzero = %d\nneg = %d\npos = %d\nspace = %d \nj = %d\nz = %d\nh = %d\nl = %d\npoint = %d\nweed = %d\n",res.c_bool.sharp, res.c_bool.zero, res.c_bool.neg, res.c_bool.pos, res.c_bool.space, res.c_bool.j, res.c_bool.z, res.c_bool.h, res.c_bool.l, res.c_bool.point, res.c_bool.width);
	
//	ft_putstr("\n************* END ************\n");
	res.length++;
	if (c == 's' || c == 'S')
		res = stock_s(ap, res);
//	if (c == 'd')
//		res = ft_stock_d(ap, res);
	if (c == 'c' || c == 'C')
		res = stock_c(ap, res);

	return (res);
}

t_print		check_true(t_print res)
{
	char	*str;

	if (res.c_bool.width == 0)
	{
		res.length++;
		return (res);
	}
	str = ft_memalloc(res.c_bool.width);
	if (res.c_bool.zero == 1)
		str = width_s2(str, '0', res.c_bool.width, 0);
	if (res.c_bool.zero == 0)
			str = width_s2(str, ' ', res.c_bool.width, 0);
	res = ft_strcat_f(str, res, 0);
	ft_strdel(&str);
	return (res);
}

t_print		distrib(const char *str, va_list ap, t_print res)
{
	res.save_i = res.k;

	if (str[res.k] == '\0')
	{
		res.k++;
		return (res);
	}
	res.length--;
	while (res.c_bool.check == 0 && str[res.k])
	{
		res = check_flag(str, res, 0);
		res.k++;
	}
	if (res.c_bool.check == -1)
		return (check_true(res));
	if (res.c_bool.h > 0)
		res.c_bool.h = (res.c_bool.h % 2) + 1;// si resultat vaut 1 => pair donc == hh, si resultat vaut 2 => impair donc  == h
	if (res.c_bool.l > 0)
		res.c_bool.l = (res.c_bool.l %  2) + 1;// si resultat vaut 1 => pair donc == ll, si resultat vaut 2 => impair donc  == l
	if (res.c_bool.check != 0)
		res = if_forest(res.c_bool.c, ap,res);
	if (res.k == res.save_i)
		res.k++;
	return (res);
}

int		ft_printf(const char *str, ...)
{
	va_list		ap;
	t_print		res;

	if (!str || str[0] == '\0')
		return (0);
	res.i = 0;
	res.k = 0;
	res.length = 0;
	va_start(ap, str);
	ft_bzero(res.buf, BUFF_SIZE);
	while (str[res.k])
	{
		if (str[res.k] == '%')
		{
			res.k++;
			res = init_bool(res);
			res = distrib(str,ap,res);// faire en sorte que a fonction renvoi un pointeur sapres le type du '%'
			res.k--;
		
		}
		else 
		{
			res.buf[res.length++] = str[res.k];;
			res.k++;
		}
	}
//	printf("    ||len = %d ||", res.length);
//	printf("\n||printf = %d ||\n", printf("%"));
/*	printf("\n||printf = %d ||\n", printf(">>%d<<", 555));
	printf("\n||printf = %d ||\n", printf(">>%<<"));
	printf("\n||printf = %d ||\n", printf(">>%m<<"));
	printf("||||| I = %d |||||", res.k + res.length);
*/	write(1, res.buf, res.length);
	va_end(ap);
	return (res.length);
}
