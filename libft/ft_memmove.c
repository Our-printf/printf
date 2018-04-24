/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:19:34 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/06 10:38:49 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_u8 *temp_s;
	t_u8 *temp_d;

	temp_s = (t_u8 *)src;
	temp_d = (t_u8 *)dst;
	if (dst > src)
	{
		while (len--)
			temp_d[len] = temp_s[len];
		return (temp_d);
	}
	ft_memcpy(temp_d, temp_s, len);
	return (temp_d);
}
