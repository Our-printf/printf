/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 01:12:42 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/17 21:39:23 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_putstr_f(char const *s)
{
	unsigned int	i;
	int count;

	count = 0;
	i = ft_strlen(s);
	write(1, s, i);
	count += i;
	return (count);
}
