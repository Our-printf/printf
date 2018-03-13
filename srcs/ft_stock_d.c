/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:38:10 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/13 19:06:56 by rojaguen         ###   ########.fr       */
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
	if (ft_strlen(str) > res.c_bool.width)
		return(str);
	s = ft_strnew(res.c_bool.width - ft_strlen(str));
	while(a < (res.c_bool.width - ft_strlen(str)) + 1)
	{
//		ft_putnbr(res.c_bool.width - ft_strlen(str));

//		ft_putchar('\n');
	//	if (res.c_bool.zero == 0)
			s[a] = ' ';
	//	else if(res.c_bool.zero == 1 && res.c_bool.point == 0 )
	//		s[a] = '0';
		a++;
	}
//	if (a > 0)
	a--;
//	ft_putnbr(a);
//	ft_putchar('\n');
//	if (a > 0)
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
	if (ft_strlen(str) >= res.c_bool.point)
		return (str);
	s = ft_strnew(ft_strlen(str) + res.c_bool.point);
	while (i + ft_strlen(str)  < res.c_bool.point)
	{
		s[i] = '0';
		i++;
	}
	while (i < res.c_bool.point + ft_strlen(str))
	{
		s[i] = str[a];
		i++;
		a++;
	}
	s[i] = '\0';
	return (s);
}

/*char		*ft_sign(char *str, t_print res, intmax_t rsl)
{
	char	*s;
	int		i;
	int		a;

	a = 0;
	i = 0;
	if (rsl == 0)
	{
		s = ft_strnew(ft_strlen(str) + 1);
		s[i] = '+';
		i++;
		if (res.c_bool.pos == 1 && res.c_bool.point == 0)
			return (s);
		while (i < ft_strlen(str) + 1)
		{
			s[i] = str[a];
			a++;
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	if (rsl > 0 && res.c_bool.pos != -1)
	{
		s = ft_strnew(ft_strlen(str) + 1);
		s[i] = '+';
		i++;
	}
	else if (res.c_bool.pos == -1)
	{
		s = ft_strnew(ft_strlen(str));
		s[i] = '-';
		i++;
	}
	while (i < ft_strlen(str) + 1)
	{
		s[i] = str[a];
		i++;
		a++;
	}
	return (s);
}*/

char		*ft_negatif(char *str, t_print res)
{
	int i;
	int a;
	char *s;
	int len;

	a = 0;
	i = 0;
	if (ft_strlen(str) > res.c_bool.width)
		return (str);
	s = ft_strnew(res.c_bool.width - ft_strlen(str));
//	ft_putstr(str);
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

/*char		*ft_zero(char *str, t_print res)
{
	char	*s;
	int		i;
	int		a;

	a = 0;
	i = 0;
	if (res.c_bool.point < 0)
	{
	if (!(res.c_bool.point > 0))
	{
	res.c_bool.zero = 0;
	s = ft_widht(str,res);
	res.c_bool.zero = 1;
	while (s[i] == ' ')
	{
		s[i] = '0';
		i++;
	}
	if (res.c_bool.pos == 1 && res.c_bool.width > ft_strlen(str))
		s = ft_strdup(s + 1);
	if (res.c_bool.pos == -1)
		s = ft_strdup(s + 1);
	return (s);
	}
	}
	else
	{
		s = ft_widht(str,res);
		while (i < (res.c_bool.width - res.c_bool.point))
		{
			s[i] = ' ';
			i++;
		}
		while (s[i] == ' ')
			s[i++] = '0';
	//	if (res.c_bool.width > res.c_bool.point)
		//	s = ft_strdup(s + (res.c_bool.width - res.c_bool.point - i));
		return(s);
	}
	return (str);
}*/

/*int long long		ft_specs(t_print res, int long long va)
{
	intmax_t rsl;
	(void)rsl;
//	int va;

	if (res.c_bool.h == 1)
		rsl = (signed char)va;
	else if (res.c_bool.h == 2)
		rsl = (short int)va;
	else if (res.c_bool.l == 1)
		rsl = (long long int)va;
	else if (res.c_bool.l == 2)
		rsl = (long int )va;
	else if (res.c_bool.j == 1)
		rsl = (intmax_t)va;
	else if (res.c_bool.z == 1)
		rsl = (size_t)va;
	return(rsl);
}*/
t_print		ft_stock_d(va_list ap, t_print res)
{
	int long long va;
	char	*stock;
	int		rsl;
	//(void)rsl;
	va = va_arg(ap, int long long);

	if (res.c_bool.specs == 1)
		rsl = ft_specs(res,va);
	else
		rsl = va;
	if (rsl == 0 && res.c_bool.point == 0 && res.c_bool.pos == 0)
	{
		if (res.c_bool.neg == 1)
		{
			stock = ft_negatif(stock,res);
			res = ft_strcat_f(stock,res,0);
		}
	/*	else if (res.c_bool.point == 0)
		{
			stock = ft_point(stock,res);
			res = ft_strcat_f(stock,res,0);
		}*/
		return(res);
	}
	if (rsl < 0)
	{
		rsl = rsl * -1;
		res.c_bool.pos = -1;
	}
	res = ft_stock_dif(ap,res,rsl);
	/*stock = ft_itoa_f(rsl);
	if (res.c_bool.pos == 0 && rsl >= 0 && res.c_bool.space == 1)
		res = ft_strcat_f(0,res,' ');
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		stock = ft_zero(stock,res);
	if (res.c_bool.point >= 0)
		stock = ft_point(stock,res);
	if (res.c_bool.pos > 0 || res.c_bool.pos == -1)
		stock = ft_sign(stock,res,rsl);
	if (res.c_bool.width > 0 && res.c_bool.neg == 0 && res.c_bool.zero == 0)
		stock = ft_widht(stock,res);
	if (res.c_bool.neg == 1)
		stock = ft_negatif(stock,res);
	if (stock)
		res = ft_strcat_f(stock,res,0);*/
	return (res);
}
