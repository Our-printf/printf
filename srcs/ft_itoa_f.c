/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:11:23 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/28 18:25:21 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int		ft_nb_digit(int n)
{
	int digit;

	digit = 0;
	if (n <= 0)
	{
		digit++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char			*ft_itoa_f(int n)
{
	char	s[11];
	int		i;

	i = ft_nb_digit(n) - 1;
	ft_bzero(s, 11);
	if (n == 0)
		s[i] = 48;
	if (n < 0)
	{
		s[i--] = -1 * (n % 10) + 48;
		n = n / 10;
		n = n * -1;
		s[0] = '-';
	}
	while (n > 0)
	{
		s[i--] = n % 10 + 48;
		n = n / 10;
	}
	return (ft_strdup(s));
}
