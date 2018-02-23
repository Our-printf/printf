/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:23:48 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/20 17:18:34 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_check_flag(const char *format, int *i)
{
	int a;

	a = 0;
	if (format[(*i) + 1] == '+')
	{
		ft_putchar('+');
		(*i) = (*i) + 1;
		while (format[*i + 1] == '+')
			(*i)++;
		return (1);
	}
	return (0);
}
