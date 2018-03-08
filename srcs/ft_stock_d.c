/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:38:10 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/07 21:07:42 by rojaguen         ###   ########.fr       */
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
	while(a < res.c_bool.width - ft_strlen(str) + 1)
	{
//		ft_putnbr(a);
//		ft_putchar('\n');
//		ft_putnbr(res.c_bool.width - ft_strlen(str));

//		ft_putchar('\n');
	//	if (res.c_bool.zero == 0)
			s[a] = ' ';
	//	else if(res.c_bool.zero == 1 && res.c_bool.point == 0 )
	//		s[a] = '0';
		a++;
	}
	if (a != 0)
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

char		*ft_sign(char *str, t_print res, intmax_t rsl)
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
}

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

char		*ft_zero(char *str, t_print res)
{
	char	*s;
	int		i;
	int		a;

	a = 0;
	i = 0;
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
	return (str);

}

t_print		ft_stock_d(va_list ap, t_print res)
{
	int			rsl;
	char		*stock;
	char		*s;

	rsl = va_arg(ap, int );
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
	stock = ft_itoa_f(rsl);
	if (res.c_bool.zero == 1 && res.c_bool.point == -1 && res.c_bool.neg == 0)
		stock = ft_zero(stock,res);

	if (res.c_bool.point >= 0)
		stock = ft_point(stock,res);

	if (res.c_bool.pos > 0 || res.c_bool.pos == -1)
		stock = ft_sign(stock,res,rsl);

	if (res.c_bool.width > 0 && res.c_bool.neg == 0)//  && res.c_bool.zero == 0)
		stock = ft_widht(stock,res);

	if (res.c_bool.neg == 1)
		stock = ft_negatif(stock,res);
	if (stock)
		res = ft_strcat_f(stock,res,0);
	return (res);
}
