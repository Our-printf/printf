/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:25:19 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/24 16:19:57 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		strcat_buff(char *str, t_print res)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (res.length == BUFF_SIZE - 1)
			res = ft_clean(res);
		res.buf[res.length++] = str[i++];
	}
	return (res);
}

void		strcat_width(char *str, int len, char c, int *index)
{
	int			i;

	i = 0;
	while (i < len)
	{
		str[*index] = c;
		*index += 1;
		i++;
	}
}

int			nbr_len2(intmax_t nbr, int base)
{
	intmax_t	i;

	i = 0;
	while (nbr / base > 0)
	{
		nbr /= base;
		i++;
	}
	return (i + 1);
}

int			nbr_len_int(intmax_t nbr, t_print res)
{
	int			i;
	int			j;
	intmax_t	tmp;

	tmp = nbr;
	i = 0;
	j = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	else if (res.c_bool.space == 1 || res.c_bool.pos == 1)
		i++;
	while (nbr / 10 > 0)
	{
		nbr /= 10;
		j++;
	}
	if (!(tmp == 0 && res.c_bool.point == 0))
		j++;
	if (j < res.c_bool.point)
		return (res.c_bool.point + i);
	return (j + i);
}

t_print		sort_intmax(char *str, t_print res, intmax_t va, int *index)
{
	char		*intmin;
	int			i;

	intmin = "9223372036854775808";
	i = 0;
	if ((*index) == 0 && res.c_bool.check == 0)
		va++;
	else
	{
		while (i < 19)
		{
			str[*index] = intmin[i];
			i++;
			*index += 1;
		}
	}
	res.c_bool.check = 1;
	return (res);
}
