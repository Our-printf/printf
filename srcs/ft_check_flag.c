/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:23:48 by rojaguen          #+#    #+#             */
/*   Updated: 2018/02/24 20:23:31 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_bool		flag(const char *str, t_bool bool_tab, t_print res)
{
	if (str[res.j] == '#')
		bool_tab.sharp = 1;
	else if (str[res.j] == '0')
		bool_tab.zero = 1;
	else if (str[res.j] == '-')
		bool_tab.neg = 1;
	else if (str[res.j] == '+')
		bool_tab.pos = 1;
	else if (str[res.j] == ' ')
		bool_tab.space = 1;
	else if (str[res.j] == 'z')
		bool_tab.z = 1;
	else if (str[res.j] == 'j')
		bool_tab.j = 1;
	else if (str[res.j] == 'h')
		bool_tab.h += 1;
	else if (str[res.j] == 'l')
		bool_tab.l += 1;
	else 
		bool_tab.check = -1;// verifie si il n'y a pas un caractere a la con
	return (bool_tab);
}

t_bool		check_flag(const char *str, t_bool bool_tab, t_print res, int i)
{
	char *arg;

	i = 0;
	arg = "sSpdDioOuUxXcC";
	while (str[res.j] != arg[i] && arg[i] != '\0')
		i++;
//	printf("c = %c",arg[i]);

//	printf("\n*********\na = %d\n********\n",a);
	if (str[res.j] == arg[i])
		bool_tab.c = arg[i];

	printf("c = %c",arg[i]);
	if (arg[i] == '\0')
	{
		bool_tab = flag(str,bool_tab,res);
		return (bool_tab);
	}
	bool_tab.check = 1;
	return (bool_tab);
}
