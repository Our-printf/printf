/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:00:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/26 16:50:09 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		stock_s(va_list ap, t_print res)
{

	char *tmp  = va_arg(ap, char *);
//	printf("cp = %s\n",tmp);
/*	printf ("\n sharp = %d \n zero = %d \n neg = %d \n pos = %d \n space= %d \n j = %d \n z = %d \n h = %d \n l =  %d \n\n",res.c_bool.sharp, res.c_bool.zero, res.c_bool.neg, res.c_bool.pos, res.c_bool.space, res.c_bool.j, res.c_bool.z, res.c_bool.h, res.c_bool.l);
*/
	return (0);


}
