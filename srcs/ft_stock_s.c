/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:00:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/23 20:47:30 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		stock_s(va_list ap, t_print res, t_bool bool_tab)
{

	char *tmp  = va_arg(ap, char *);
//	printf("cp = %s\n",tmp);
	printf ("\n%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n\n",bool_tab.sharp, bool_tab.zero, bool_tab.neg, bool_tab.pos, bool_tab.space, bool_tab.j, bool_tab.z, bool_tab.h, bool_tab.l);

	return (0);


}
