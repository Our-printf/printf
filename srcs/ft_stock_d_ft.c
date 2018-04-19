/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:03:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/18 21:34:11 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

intmax_t	ft_specs(t_print res, intmax_t va)
{
	intmax_t	rsl;

	rsl = 0;
	if (res.c_bool.h == 1)
		rsl = (signed char)va;
	else if (res.c_bool.h == 2)
		rsl = (short int)va;
	else if (res.c_bool.l == 1)
		rsl = (long long int)va;
	else if (res.c_bool.l == 2)
		rsl = (long)va;
	else if (res.c_bool.j == 1)
		rsl = (intmax_t)va;
	else if (res.c_bool.z == 1)
		rsl = (size_t)va;
	return (rsl);
}

char		*ft_zero(char *str, t_print res, int cn)
{
	char	*s;

	s = NULL;
	if (res.c_bool.space == 1)
		cn = 1;
	if (res.c_bool.point < 0)
	{
		if (res.len == res.c_bool.width)
			return (str);
		if (!(res.c_bool.point > 0))
			s = ft_zero2(str, res);
		return (s);
	}
	else if (!(res.c_bool.point == 0 && res.c_bool.width > 0))
	{
		s = ft_zero3(str, res, cn);
		return (s);
	}
	else
	{
		res.c_bool.space = 0;
		s = ft_widht(str, res);
		return (s);
	}
	return (str);
}

char		*ft_sign2(char *str, t_print res, char *s)
{
	int		i;
	int		a;

	a = 0;
	i = 0;
//	if (res.c_bool.width > 0 && res.c_bool.point >= 0 && res.c_bool.zero == 1 &&
//		res.c_bool.width > res.c_bool.point)
//	{
		while (str[i] == ' ')
			s[i++] = str[a++];
		if (!(res.c_bool.pos == -1))
			s[i] = '+';
		else
			s[i] = '-';
		i++;
		while (str[a])
			s[i++] = str[a++];
		if (s[0] == ' ')
			s = ft_strdup_l(s + 1);
		
		ft_strdel(&str);
		return (s);
//	}
//	return (s);
}

char		*ft_sign3(char *str, t_print res, int rsl, int i)
{
	int		a;
	char	*s;

	a = 0;
	if (rsl > 0 && res.c_bool.pos != -1)
	{
		s = ft_strnew(ft_strlen(str) + 1);
		s[i] = '+';
		i++;
	}
	else if (res.c_bool.pos == -1)
	{
		s = ft_strnew(ft_strlen(str) + 1);
		s[i] = '-';
		if (res.len + 1 < res.c_bool.width
			&& res.c_bool.neg == 0 && res.c_bool.zero == 1)
			a++;
		i++;
	}
	while (i < (int)ft_strlen(str) + 1)
		s[i++] = str[a++];
	s[i] = '\0';
	if (res.c_bool.specs == 0)
		free(str);
	return (s);
}

char		*ft_sign(char *str, t_print res, intmax_t rsl)
{
	char	*s;
	int		i;
	int		a;

	a = 0;
	i = 0;
	s = NULL;
	if (res.c_bool.width > 0 && res.c_bool.point >= 0 && res.c_bool.zero == 1 &&
			res.c_bool.width > res.c_bool.point)
	{
		s = ft_strnew(ft_strlen(str) + 1);
		s = ft_sign2(str, res, s);
		return (s);
	}
	s = ft_sign3(str, res, rsl, i);
	return (s);
}
