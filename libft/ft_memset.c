/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 18:23:40 by sgarcia           #+#    #+#             */
/*   Updated: 2018/03/19 11:38:26 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(char *b, int c, int len)
{
	char	chara;

	chara = c;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		b[len - 1] = chara;
		len--;
	}
	return (b);
}
