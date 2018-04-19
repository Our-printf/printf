/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_ft3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 14:57:20 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/18 18:53:41 by rojaguen         ###   ########.fr       */
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
		return (str);
	s = ft_strnew(res.c_bool.width + 3);
	while (a < (res.c_bool.width - (int)ft_strlen(str)) + 1)
		s[a++] = ' ';
	a--;
	while (str[i])
		s[a++] = str[i++];
	s[a] = '\0';
	return (s);
}

char		*ft_point_zero(char *str, t_print res)
{
	char	*s;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if ((int)ft_strlen(str) >= res.c_bool.point)
		return (str);
	s = ft_strnew(ft_strlen(str) + res.c_bool.point);
	while (i + (int)ft_strlen(str) < res.c_bool.point)
		s[i++] = '0';
	while ((unsigned long)i < res.c_bool.point + ft_strlen(str))
		s[i++] = str[a++];
	s[i] = '\0';
	return (s);
}

char		*ft_sign_zero2(char *str)
{
	int		cnt;
	int		a;
	int		i;
	char	*s;

	a = 0;
	i = 0;
	cnt = 0;
	s = ft_strnew(ft_strlen(str) + 1);
	while ((unsigned long)i < ft_strlen(str) + cnt)
	{
		if (str[a] == ' ' && str[a + 1] == '0')
		{
			s[i++] = '+';
			a++;
		}
		else if (a == 0 && str[a] == '0')
		{
			s[i++] = '+';
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
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
	{
		s = ft_sign_zero2(str);
		ft_strdel(&str);
		return (s);
	}
	s[i] = '+';
	i++;
	while ((unsigned long)i < ft_strlen(str) + 1)
		s[i++] = str[a++];
	s[i] = '\0';
	free(str);
	return (s);
}
