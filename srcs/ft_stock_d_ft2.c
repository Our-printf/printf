/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_ft2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:36:17 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/19 17:07:56 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		ft_rsl_zero(t_print res, int rsl)
{
	char	*stock;

	stock = ft_itoa_cast(rsl);
	res.tmp = ft_itoa(rsl);
	res.len = ft_strlen(res.tmp);
	if (res.c_bool.point == 0)
		stock[0] = 0;
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		stock = ft_zero(stock, res, 0);
	if (res.c_bool.point >= 0)
		stock = ft_point_zero(stock, res);
	if (res.c_bool.pos > 0 || res.c_bool.pos == -1)
		stock = ft_sign_zero(stock, res, rsl);
	if (res.c_bool.width > 0 && res.c_bool.neg == 0 && res.c_bool.zero == 0)
		stock = ft_widht_zero(stock, res);
	if (res.c_bool.neg == 1)
		stock = ft_negatif(stock, res);
	if (res.c_bool.pos == 0 && res.c_bool.space == 1)
		res = ft_strcat_f(0, res, ' ');
	res = ft_strcat_f(stock, res, 0);
	free(res.tmp);
	return (res);
}

char		*ft_space(t_print res, char *stock)
{
	char	*s;
	int		i;

	i = 0;
	res.c_bool.space = 1;
	s = " ";
	stock = ft_strjoin(s, stock);
	return (stock);
}

t_print		ft_stock_dif(t_print res, int rsl, char *stock)
{
	res.tmp = ft_itoa(rsl);
	res.len = ft_strlen(res.tmp);
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		stock = ft_zero(stock, res, 0);
	if (res.c_bool.point >= 0)
		stock = ft_point(stock, res);
	if (res.c_bool.pos > 0 || res.c_bool.pos == -1)
		stock = ft_sign(stock, res, rsl);
	if (res.c_bool.width > 0 && res.c_bool.neg == 0 && res.c_bool.zero == 0)
		stock = ft_widht(stock, res);
//	printf("%s\n",stock);
	if (res.c_bool.neg == 1)
		stock = ft_negatif(stock, res);
//	printf("%s\n",stock);
	if (res.c_bool.pos == 0 && res.c_bool.space == 1)
		stock = ft_space(res, stock);
//	printf("%s\n",stock);
	if (stock)
		res = ft_strcat_f(stock, res, 0);
	free(res.tmp);
	return (res);
}
