/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:38:10 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/27 19:58:18 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*ft_widht(char *str, t_print res)
{
	int		i;
	char	*s;
	int		a;

	a = 0;
	i = 0;
	if ((int)ft_strlen(str) > res.c_bool.width)
		return(str);
	s = ft_strnew(res.c_bool.width + 3);

//	s = ft_strnew(res.c_bool.width - ft_strlen(str) + (ft_strlen(str) + 3));
	while(a < (res.c_bool.width - (int)ft_strlen(str)) + 1)
	{
		s[a] = ' ';
		a++;
	}
	a--;
	while (str[i])
	{
		s[a] = str[i];
		a++;
		i++;
	}
	s[a] = '\0';
	return (s);
}

char		*ft_point(char *str, t_print res)
{
	char *s;
	int i;
	int a;

	i = 0;
	a = 0;
	if ((int)ft_strlen(str) >= res.c_bool.point)
		return (str);
	s = ft_strnew(ft_strlen(str) + res.c_bool.point);
	while (i + (int)ft_strlen(str)  < res.c_bool.point)
	{
		s[i] = '0';
		i++;
	}
	while (i < res.c_bool.point + (int)ft_strlen(str))
	{
		s[i] = str[a];
		i++;
		a++;
	}
	s[i] = '\0';
	return (s);
}

char		*ft_negatif(char *str, t_print res)
{
	int i;
	int a;
	char *s;
	int len;

	a = 0;
	i = 0;
	if ((int)ft_strlen(str) > res.c_bool.width)
		return (str);
	s = ft_strnew(res.c_bool.width - ft_strlen(str));
	len = ft_strlen(str);
	while (i < len)
	{
		s[i] = str[a];
		a++;
		i++;
	}
	while (i <= res.c_bool.width - 1)
	{
		s[i] = ' ';
		i++;
	}
	s[i] = '\0';
	return (s);
}

t_print		ft_stock_d(va_list ap, t_print res)
{
	long long int va;
	char	*stock;
	int		rsl;
	rsl = 0;
	va = va_arg(ap, long long  int);
	if (res.c_bool.specs == 1)
		va  = ft_specs(res,va);
	else
		rsl = va;
	if (rsl == 0 && res.c_bool.specs != 1)
	{
		res = ft_rsl_zero(res,rsl);
		return (res);
	}
	if (rsl < 0 && res.c_bool.specs == 0)
	{
		rsl = rsl * -1;
		res.c_bool.pos = -1;
	}
	if (res.c_bool.specs == 1)
		stock = ft_itoa_cast(va);
	else 
		stock = ft_itoa(rsl);
//	printf("s = %s\n",stock);
/*	if (rsl == 0 && res.c_bool.point == 0 && res.c_bool.pos == 0)
	{
		if (res.c_bool.neg == 1)
		{
			stock = ft_negatif(stock,res);
			res = ft_strcat_f(stock,res,0);
		}
		return(res);
	}*/
	res = ft_stock_dif(ap,res,rsl,stock);
	return (res);
}
