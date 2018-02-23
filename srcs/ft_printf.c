/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:40:23 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/23 12:40:36 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int ft_if_forest(char c, const char *format, va_list ap,  t_struct *tmp)
{
	int count;

	count = 0;
	if (c == 's')
		count = ft_stock_s(format,ap,tmp);
//	else if (c == 'd')

	else 
		return (-1);
	return (count);
}


int		distrib(const char *format, va_list ap, int *i, t_struct *tmp)
{
	int a;
	int count;
	char c;

	count = 0;
	while (!(format[*i] >= 97 && format[*i] <= 122))
	{
		(*i)++;
		if (format[*i] >= 97 && format[*i] <= 122)
			c = format[*i];
	}
	if (!c)
		return (-1);
	else
		if ((count = ft_if_forest(c,format,ap,tmp)) == -1)
			return (-1);
//	printf("c = %c\n",c);
	return (count);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	int i = 0;
	int count;
	t_struct	tmp;

	count = 0;
	if (!format)
		return(0);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if ((count += distrib(format,ap,&i,&tmp)) == -1)
				return (-1);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
			tmp.cp_format = ft_strdup(format + i);
		//	printf("\n\ncp = %s\n\n",tmp.cp_format);
		}
		i++;
	}
	free(tmp.cp_format);
	va_end(ap);
	return (count);
}

/*
void print_adress(unsigned long int nb)
{
	if (nb = 0) 
		ft_putchar("(nil)")
		return;
	ft_putchar(0x);
	ft_itoa_base(nb);
}*/
