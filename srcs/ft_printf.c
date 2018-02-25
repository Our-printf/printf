/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:40:23 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/25 20:09:10 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int if_forest(char c, va_list ap, t_bool bool_tab, t_print res)
{
printf ("\nsharp = %d\nzero = %d\nneg = %d\npos = %d\nspace = %d \nj = %d\nz = %d\nh = %d\nl = %d\n\n",bool_tab.sharp, bool_tab.zero, bool_tab.neg, bool_tab.pos, bool_tab.space, bool_tab.j, bool_tab.z, bool_tab.h, bool_tab.l);
	
	printf("\nc = %c", bool_tab.c);
	if (!c)
		res.j = res.j - res.save_i;
	if (c == 's')
		stock_s(ap,res,bool_tab);
	return (0);
}


int		distrib(const char *str, va_list ap, t_print res)
{
	t_bool	bool_tab;

	res.save_i = res.j;
	if (str[res.j] == '%')
	{
		res.buf[res.i] = '%';
		res.i++;
		return (0);
	}
	bool_tab = init_bool(bool_tab);
	while (bool_tab.check == 0 && str[res.j])
	{
		bool_tab =	check_flag(str, bool_tab, res, 0);
		res.j++;
	}

	if (bool_tab.check == -1)
		return (res.j = res.save_i);
	if (bool_tab.h > 0)
		bool_tab.h = (bool_tab.h % 2) + 1;// si resultat vaut 1 => pair donc == hh, si resultat vaut 2 => impair donc  == h
	if (bool_tab.l > 0)
		bool_tab.l = (bool_tab.l %  2) + 1;// si resultat vaut 1 => pair donc == ll, si resultat vaut 2 => impair donc  == l
//	printf("c = %c", bool_tab.c);
	if ((if_forest(bool_tab.c,ap,bool_tab,res)) == -1)
			return (-1);
	return (0);
}

int		ft_printf(const char *str, ...)
{
	va_list		ap;
	t_print		res;

	if (!str)
		return(0);
	res.i = 0;
	res.j = 0;
	va_start(ap, str);
	ft_bzero(res.buf, BUFF_SIZE);
	while (str[res.j])
	{
		if (str[res.j] == '%')
		{
			res.j++;
			if ((distrib(str,ap,res)) == -1)// faire en sorte que a fonction renvoi un pointeur sapres le type du '%'
				return (-1);
		}
		else {
			ft_putchar(str[res.j]);
			res.buf[res.i++] = str[res.j++];
			}
	}
	va_end(ap);
	return (res.i);
}
