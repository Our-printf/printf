/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:00:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/14 15:51:38 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*preci_s(char *tmp, t_print res)
{
	int		j;

	j = 0;
//	printf("COPY2 = %s\n", tmp);
	while (tmp[j + res.c_bool.point])
	{
		tmp[j + res.c_bool.point] = '\0';
		j++;
	}
//	printf("COPY3 = %s\n", tmp);
	return (tmp);

//	refaire en chengeant directement ds l'adresse de tmp, en envoyant &tmp et 2crivant dedans des \0
}

t_print		neg_s(char *tmp, t_print res)
{
	int		i;

	i = ft_strlen(tmp);
	if (i <= res.c_bool.width)
		return (res);
	return (res);
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
//	if (res.c_bool.neg == 1)
//		neg_s(tmp, res);
	res = ft_strcat_f(copy, res, 0);
	return (res);
}
