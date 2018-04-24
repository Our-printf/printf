/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:52:50 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/11 15:12:51 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	countnbr(int n)
{
	int		i;
	long	nb;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	j;
	long	nb;

	nb = n;
	j = 0;
	i = countnbr(nb);
	if (i == 0)
		i++;
	if ((str = (char *)malloc((i + 1) * sizeof(char))) == 0)
		return (NULL);
	str[i] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		j = 1;
		nb = -nb;
	}
	while (i > 0 + j)
	{
		str[i-- - 1] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
