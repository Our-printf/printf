/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 18:41:42 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/17 21:56:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*ft_zero3(char *str, t_print res, int cn)
{
	int		i;
	char	*s;

	i = 0;
	if (res.c_bool.space == 1)
		res.c_bool.space = 0;
	s = ft_widht(str, res);
	if (cn == 1)
		res.c_bool.space = 1;
	cn = 0;
	if (res.len > res.c_bool.point)
		cn = res.c_bool.point - res.len;
	while (i < (res.c_bool.width - res.c_bool.point) + cn)
		s[i++] = ' ';
	while (s[i] == ' ')
		s[i++] = '0';
	if (res.c_bool.space == 1 && (res.c_bool.width > res.c_bool.point)
		&& (res.len > res.c_bool.point))
		s = ft_strdup_l(s + 1);
	return (s);
}

char		*ft_zero2(char *str, t_print res)
{
	char	*s;
	int		i;
	int		a;
	int		cn;

	a = 0;
	i = 0;
	cn = 0;
	s = ft_widht(str, res);
	if (cn == 1 && (res.c_bool.width > res.len))
		i++;
	while (s[i] == ' ')
		s[i++] = '0';
	if (cn == 1 && (res.c_bool.width > res.len))
		s = ft_strdup_l(s + 1);
	if (res.c_bool.pos == 1 && res.c_bool.width > (int)ft_strlen(str))
		s = ft_strdup_l(s + 1);
	if (res.c_bool.pos == -1 && res.c_bool.pos != -1)
		s = ft_strdup_l(s + 1);
	if (res.c_bool.zero == 1 && res.c_bool.space == 1
		&& res.c_bool.width > (int)ft_strlen(str) && res.c_bool.point == -1)
		s = ft_strdup_l(s + 1);
	return (s);
}
