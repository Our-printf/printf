/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:03:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/13 19:06:54 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int long long		ft_specs(t_print res, int long long va)
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
}

char		*ft_zero(char *str, t_print res)
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
