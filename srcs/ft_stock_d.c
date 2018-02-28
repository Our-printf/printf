/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:38:10 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/28 20:22:14 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		ft_stock_d(va_list ap, t_print res)
{
	int rsl;
	char *stock;

	rsl = va_arg(ap, int );
//	ft_putstr(stock);
	stock = ft_itoa_f(rsl);
	if (res.c_bool.sharp == 0 && res.c_bool.zero == 0 && res.c_bool.neg == 0 
			&& res.c_bool.pos == 0 && res.c_bool.space == 0 
			&& res.c_bool.j == 0 && res.c_bool.z == 0 && res.c_bool.h == 0 
			&& res.c_bool.l == 0 && res.c_bool.point == -1 
			&& res.c_bool.width == 0)
			 {
				res = ft_strcat_f(stock,res,0);
				return (res);
			 }
	return (res);
}
