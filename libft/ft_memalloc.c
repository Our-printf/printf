/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 23:53:18 by sgarcia           #+#    #+#             */
/*   Updated: 2017/12/04 16:24:42 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mall;

	if (size < 4294967295)
	{
		if ((mall = (void *)malloc((size + 1) * sizeof(void))) == 0)
			return (NULL);
		ft_bzero(mall, size + 1);
	}
	else
		return (NULL);
	return (mall);
}
