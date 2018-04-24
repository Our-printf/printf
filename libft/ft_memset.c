/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 18:23:40 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/02 20:08:01 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_u8	chara;
	t_u8	*copy;

	chara = c;
	copy = b;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		copy[len - 1] = chara;
		len--;
	}
	return (copy);
}
