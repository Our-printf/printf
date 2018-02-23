/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:00:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/23 12:33:08 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_stock_s(const char *format, va_list ap, t_struct *tmp)
{

	tmp->t_char = NULL;
	tmp->t_char = va_arg(ap, char *);
	printf("cp = %s\n",tmp->cp_format);
	ft_putstr_f(tmp->t_char);

	return (0);


}
