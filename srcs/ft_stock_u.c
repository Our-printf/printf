/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 18:20:57 by sgarcia           #+#    #+#             */
/*   Updated: 2018/05/02 12:05:03 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static uintmax_t	ft_specs_u(t_print res, uintmax_t va)
{
	uintmax_t	rsl;

	rsl = 0;
	if (res.c_bool.h == 1)
		rsl = (unsigned char)va;
	else if (res.c_bool.h == 2)
		rsl = (unsigned short int)va;
	else if (res.c_bool.l == 1)
		rsl = (unsigned long long int)va;
	else if (res.c_bool.l == 2)
		rsl = (unsigned long)va;
	else if (res.c_bool.j == 1)
		rsl = (uintmax_t)va;
	else if (res.c_bool.z == 1)
		rsl = (size_t)va;
	else
		rsl = (unsigned int)va;
	return (rsl);
}

static void		sort_order_int_neg_u(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.zero == 1 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 10)), '0', &index);
	if (res.c_bool.specs == 1)
		ft_itoa_cast(va, str, &index, res);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print		ft_stock_u(va_list ap, t_print res, uintmax_t rsl, uintmax_t va)
{
	char		*str;
	int			len;

	va = va_arg(ap, uintmax_t);
	rsl = (uintmax_t)va;
	printf ("\n1rsl = ||%d||\n", rsl);
	fflush(stdout);
	if (rsl < 0 && res.c_bool.specs == 0)
		rsl = rsl - -4294967296;
	if (rsl > 4294967295)
		rsl = rsl - 4294967296;
	res.c_bool.pos = 0;
	res.c_bool.space = 0;
	str = ft_memalloc(32 + res.c_bool.width + res.c_bool.point);
	printf ("\n2rsl = ||%d|| str = ||%s||\n", rsl, str);
	fflush(stdout);
	if (res.c_bool.specs == 1)
		rsl = ft_specs_u(res, va);
	len = nbr_len_int(rsl, res);
	printf ("\n3rsl = ||%d|| str = ||%s||\n", rsl, str);
	fflush(stdout);
	ft_bzero(str, 32 + res.c_bool.width + res.c_bool.point);
	if (rsl < 0)
		sort_order_int_neg_u(str, res, rsl, len);
	printf ("\n4rsl = ||%d|| str = ||%s||\n==>", rsl, str);
	fflush(stdout);
	ft_putnbr(rsl);
	if (rsl > 0)
		sort_order_posi(str, res, rsl, len);
	printf ("\n5rsl = ||%d|| str = ||%s||\n", rsl, str);
	fflush(stdout);
	if (rsl == 0)
		sort_order_zeroi(str, res, rsl, len);
	printf ("\n6rsl = ||%d|| str = ||%s||\n", rsl, str);
	fflush(stdout);
	res = ft_strcat_f(str, res, 0);
	ft_strdel(&str);
	return (res);
}

static void		sort_order_int_neg_lu(char *str, t_print res, unsigned long va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.zero == 1 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 10)), '0', &index);
		ft_itoa_cast_lu(va, str, &index, res);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print		ft_stock_lu(va_list ap, t_print res, intmax_t rsl, uintmax_t va)
{
	char		*str;
	int			len;

	va = va_arg(ap, unsigned long);
	rsl = (intmax_t)va;
	res.c_bool.pos = 0;
	res.c_bool.space = 0;
	res.c_bool.h = 0;
	str = ft_memalloc(32 + res.c_bool.width + res.c_bool.point);
	if (res.c_bool.specs == 1)
		va = ft_specs_u(res, va);
	len = nbr_len_int(rsl, res);
	ft_bzero(str, 32 + res.c_bool.width + res.c_bool.point);
	if (rsl < 0)
		sort_order_int_neg_lu(str, res, va, len);
	if (rsl > 0)
		sort_order_posi(str, res, rsl, len);
	if (rsl == 0)
		sort_order_zeroi(str, res, rsl, len);
	res = ft_strcat_f(str, res, 0);
	ft_strdel(&str);
	return (res);
}
