/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:40:23 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/23 21:18:14 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int if_forest(char c, va_list ap, t_bool bool_tab, t_print res)
{
	int count;

	count = 0;
	printf("j2 = %d\n",res.j);
	if (c == 's')
	{
		write (1, "A", 1);
		count = stock_s(ap,res,bool_tab);
	}
/*	else if (c == 'd' || c == 'i')
		ft_stock_d

	else 
		return (-1);*/
	return (count);
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
		bool_tab = check_flag(str, bool_tab, res, 0);
		res.j++;
	}
	if (bool_tab.check == -1)
		return (0);
	if (bool_tab.h > 0)
		bool_tab.h = (bool_tab.h % 2) + 1;// si resultat vaut 1 => pair donc == hh, si resultat vaut 2 => impair donc  == h
	if (bool_tab.l > 0)
		bool_tab.l = (bool_tab.l %  2) + 1;// si resultat vaut 1 => pair donc == ll, si resultat vaut 2 => impair donc  == l
	stock_s(ap,res,bool_tab);
//	if ((if_forest(str[res.j],ap,bool_tab,res)) == -1)
//			return (-1);
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
			printf("j = %d\n",res.j);
			res.j++;
			if ((distrib(str,ap,res)) == -1)// faire en sorte que a fonction renvoi un pointeur sapres le type du '%'
				return (-1);
		}
		else{
			ft_putchar(str[res.j]);
			res.buf[res.i++] = str[res.j++];
			}
	}
	va_end(ap);
	return (res.i);
}
