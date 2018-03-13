/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d_ft2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:36:17 by rojaguen          #+#    #+#             */
/*   Updated: 2018/03/13 19:36:29 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ft_printf.h"

t_print   ft_stock_dif(va_list ap, t_print res, int rsl)
{
  char *stock;

  stock = ft_itoa_f(rsl);
  if (res.c_bool.pos == 0 && rsl >= 0 && res.c_bool.space == 1)
    res = ft_strcat_f(0,res,' ');
  if (res.c_bool.zero == 1 /*&& res.c_bool.point == -1*/ && res.c_bool.neg == 0)
    stock = ft_zero(stock,res);
  if (res.c_bool.point >= 0)
    stock = ft_point(stock,res);
  if (res.c_bool.pos > 0 || res.c_bool.pos == -1)
    stock = ft_sign(stock,res,rsl);
  if (res.c_bool.width > 0 && res.c_bool.neg == 0 && res.c_bool.zero == 0)
    stock = ft_widht(stock,res);
  if (res.c_bool.neg == 1)
    stock = ft_negatif(stock,res);
  if (stock)
    res = ft_strcat_f(stock,res,0);
  return (res);
}
