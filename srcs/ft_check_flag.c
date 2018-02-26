/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:23:48 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/26 19:00:26 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		flag_relou(const char *str, t_print res)
{
	if (str[res.k] == '.')
	{
		res.k++;
		res.c_bool.point = 0;
		while (str[res.k] >= '0' && str[res.k] <= '9')
		{
			res.c_bool.point = (res.c_bool.point * 10) + (str[res.k] - 48);
			res.k++;
		}
	}
	else 
	{
		while (str[res.k] >= '0' && str[res.k] <= '9')
		{
			res.c_bool.width = (res.c_bool.width * 10) + (str[res.k] - 48);
			res.k++;
		}

	}
	res.k--;
	return (res);
}
t_print		flag(const char *str, t_print res)
{
	if (str[res.k] == '#')
		res.c_bool.sharp = 1;
	else if (str[res.k] == '0')
		res.c_bool.zero = 1;
	else if (str[res.k] == '-')
		res.c_bool.neg = 1;
	else if (str[res.k] == '+')
		res.c_bool.pos = 1;
	else if (str[res.k] == ' ')
		res.c_bool.space = 1;
	else if (str[res.k] == 'z')
		res.c_bool.z = 1;
	else if (str[res.k] == 'j')
		res.c_bool.j = 1;
	else if (str[res.k] == 'h')
		res.c_bool.h += 1;
	else if (str[res.k] == 'l')
		res.c_bool.l += 1;
	else if ((str[res.k] >= '1' && str[res.k] <= '9') || str[res.k] == '.')
		res = flag_relou(str,res);
	else 
		res.c_bool.check = -1;// verifie si il n'y a pas un caractere a la con
	return (res);
}

t_print		check_flag(const char *str, t_print res, int i)
{
	char *arg;

	arg = "sSpdDioOuUxXcC";
	while (str[res.k] != arg[i] && arg[i] != '\0')
		i++;
//	printf(	"k = %d i = %d\n",res.k,i);
	if (str[res.k] == arg[i])
	{
		res.c_bool.c = arg[i];
		res.k++;
	}
	if (arg[i] == '\0')
	{

		res = flag(str,res);
		return (res);
	}
	res.c_bool.check = 1;
	return (res);
}
