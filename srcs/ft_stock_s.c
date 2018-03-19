/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:00:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/19 14:39:14 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*width_neg(char *copy, char c, int w, int len)
{
	int		j;
	char	*str;

	j = 0;
	str = ft_memalloc(w);
	while (copy[j])
	{
		str[j] = copy[j];
		j++;
	}
	while (j < w)
		str[j++] = c;
	str[j] = '\0';
	return (str);
}

char	*width_s2(char *copy, char c, int w, int len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = ft_memalloc(w);
	while (i < (w - len))
		str[i++] = c;
	while (copy[j])
	{
		str[i + j] = copy[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char		*preci_s(char *tmp, t_print res)
{
	int		j;

	j = 0;
	while (tmp[j + res.c_bool.point])
	{
		tmp[j + res.c_bool.point] = '\0';
		j++;
	}
	return (tmp);
}

char		*width_s(char *tmp, t_print res)
{
	int		j;
	int		len;
	char	*copy;

	j = 0;
	len = ft_strlen(tmp);
	if (res.c_bool.width < len)
		return (tmp);
	if (res.c_bool.neg == 1)
			copy = width_neg(copy, ' ', res.c_bool.width, len);
	if (res.c_bool.neg == 0)
	{
		if (res.c_bool.zero == 1)
			copy = width_s2(copy, '0', res.c_bool.width, len);
		else
			copy = width_s2(copy, ' ', res.c_bool.width, len);
	}
	return (copy);
}

t_print		stock_s(va_list ap, t_print res)
{
	char	*tmp;
	char	*copy;

	tmp = va_arg(ap, char *);
/*	printf ("\n sharp = %d \n zero = %d \n neg = %d \n pos = %d \n space= %d \n j = %d \n z = %d \n h = %d \n l =  %d \n\n",res.c_bool.sharp, res.c_bool.zero, res.c_bool.neg, res.c_bool.pos, res.c_bool.space, res.c_bool.j, res.c_bool.z, res.c_bool.h, res.c_bool.l);
*/
	if (!tmp)
		return (res);
	copy = ft_strdup(tmp);
//	printf("COPY = %s\n", copy);
	if (res.c_bool.point >= 0)
		copy = preci_s(copy, res);
	if (res.c_bool.width > 0)
		copy = width_s(copy, res);
//	if (res.c_bool.neg == 1)
//		neg_s(tmp, res);
	res = ft_strcat_f(copy, res, 0);
	ft_strdel(&tmp);
	ft_strdel(&copy);
//	printf("COPY3 = %s\n", tmp);
	return (res);
}
