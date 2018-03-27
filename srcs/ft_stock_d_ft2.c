/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_ft2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:36:17 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/26 23:35:56 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ft_printf.h"

char		*ft_widht_zero(char *str, t_print res)
{
	int		i;
	char	*s;
	int		a;

	a = 0;
	i = 0;
	if ((int)ft_strlen(str) > res.c_bool.width)
		return(str);
//	s = ft_strnew(res.c_bool.width - ft_strlen(str));

	s = ft_strnew(res.c_bool.width + 3);
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

char		*ft_point_zero(char *str, t_print res)
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
	while ((unsigned long)i < res.c_bool.point + ft_strlen(str))
	{
		s[i] = str[a];
		i++;
		a++;
	}
	s[i] = '\0';
	return (s);
}

char		*ft_sign_zero2(char *str)
{
	int cnt;
	int a;
	int i;
	char *s;

	a = 0;
	i = 0;
	cnt = 0;
	s = ft_strnew(ft_strlen(str) + 1);
		while ((unsigned long)i < ft_strlen(str) + cnt)
		{
			if (str[a] == ' ' && str[a + 1] == '0')
			{
				s[i] = '+';
				i++;
				a++;
			}
			else if (a == 0 && str[a] == '0')
			{
				s[i] = '+';
				i++;
				cnt = 1;
			}
			s[i++] = str[a++];
		}
		s[i] = '\0';
		return (s);
}

char		*ft_sign_zero(char *str, t_print res, intmax_t rsl)
{
	char	*s;
	int		i;
	int		a;

	a = 0;
	i = 0;
	rsl = 0;
	s = ft_strnew(ft_strlen(str) + 1);
	if (res.c_bool.pos == 1 && res.c_bool.point == 0)
		return (s);
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
	{
		s = ft_sign_zero2(str);
		return (s);
	}
	s[i] = '+';
	i++;
	while ((unsigned long)i < ft_strlen(str) + 1)
	{
		s[i] = str[a];
		a++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

t_print			ft_rsl_zero(t_print res, int rsl)
{
	char *stock;

	stock = ft_itoa_cast(rsl);
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		stock = ft_zero(stock,res,rsl);
	if (res.c_bool.point >= 0)
		stock = ft_point_zero(stock,res);

	if (res.c_bool.pos > 0 || res.c_bool.pos == -1)
		stock = ft_sign_zero(stock,res,rsl);

	if (res.c_bool.width > 0 && res.c_bool.neg == 0 && res.c_bool.zero == 0)
		stock = ft_widht_zero(stock,res);
	if (res.c_bool.neg == 1)
		stock = ft_negatif(stock,res);

	if (res.c_bool.pos == 0  && res.c_bool.space == 1)
		res = ft_strcat_f(0, res, ' ');
	res = ft_strcat_f(stock, res, 0);
	return (res);
}

t_print		ft_stock_dif(va_list ap, t_print res, int rsl, char *stock)
{
//	char *stock;
	ap = 0; //TEMPORAIRE !!!!!!!!!!!!!!1
//	if (rsl < 0)
//	{
//		rsl = rsl * -1;
//		res.c_bool.pos = -1;
//	}
//	stock = ft_itoa(rsl);
	//if (res.c_bool.pos == 0 && rsl >= 0 && res.c_bool.space == 1)
	//	res = ft_strcat_f(0,res,' ');
	int i;
	i = ft_strlen(ft_itoa(rsl));
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		stock = ft_zero(stock,res,rsl);

	if (res.c_bool.point >= 0)
		stock = ft_point(stock,res);

	if (res.c_bool.pos > 0 || res.c_bool.pos == -1 )//&& res.c_bool.specs == 0)
		stock = ft_sign(stock,res,rsl);
	if (res.c_bool.width > 0 && res.c_bool.neg == 0 && res.c_bool.zero == 0)
		stock = ft_widht(stock,res);
	if (res.c_bool.neg == 1)
		stock = ft_negatif(stock,res);

	if (res.c_bool.pos == 0  && res.c_bool.space == 1 && res.c_bool.width <= i) //&& rsl > 0)
		res = ft_strcat_f(0, res, ' ');
	if (stock)
		res = ft_strcat_f(stock,res,0);
	return (res);
}
