/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:24:27 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/28 14:11:46 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	itoa_base_static(intmax_t value, int base, char *str, int *i)
{
	char	*base_str;

	printf ("------va = ||%d|| str = ||%s||\n", value, str);
	fflush(stdout);
	base_str = "0123456789abcdef";
	if (value < 0 && base == 10)
		value = -value;
	if (value >= base)
		itoa_base_static(value / base, base, str, i);
	str[(*i)++] = base_str[value % base];
}

void	itoa_base_min(uintmax_t value, unsigned int base, char *str, int *i)
{
	char	*base_str;

	base_str = "0123456789abcdef";
	if (value >= base)
		itoa_base_min(value / base, base, str, i);
	str[(*i)++] = base_str[value % base];
}

void	itoa_base_maj(uintmax_t value, unsigned int base, char *str, int *i)
{
	char	*base_str;

	base_str = "0123456789ABCDEF";
	if (value >= base)
		itoa_base_maj(value / base, base, str, i);
	str[(*i)++] = base_str[value % base];
}
