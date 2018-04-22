#include "../include/ft_printf.h"

intmax_t	static	ft_specs(t_print res, intmax_t va)
{
	intmax_t	rsl;

	rsl = 0;
	if (res.c_bool.h == 1)
		rsl = (signed char)va;
	else if (res.c_bool.h == 2)
		rsl = (short int)va;
	else if (res.c_bool.l == 1)
		rsl = (long long int)va;
	else if (res.c_bool.l == 2)
		rsl = (long)va;
	else if (res.c_bool.j == 1)
		rsl = (intmax_t)va;
	else if (res.c_bool.z == 1)
		rsl = (size_t)va;
	else
		rsl = (int)va;
	return (rsl);
}

t_print		static	strcat_buff(char *str, t_print res)
{
	int	i;

	i = 0;
	while (str[i])
			res.buf[res.length++] = str[i++];
	return (res);
}

void	static	strcat_width(char *str, int len, char c, int *index)
{
	int		i;

	i = 0;
	while (i < len)
	{
		str[*index] = c;
		*index += 1;
		i++;
	}
}

int		static	nbr_len2(intmax_t nbr)
{
	intmax_t	i;

	i = 0;
	while (nbr / 16 > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i + 1);
}

int		static	nbr_len(intmax_t nbr, t_print res)
{
	int			i;
	int			j;
	intmax_t	tmp; 

	tmp = nbr;
	i = 0;
	j = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	else if (res.c_bool.space == 1 || res.c_bool.pos == 1)
		i++;
	while (nbr / 16 > 0)
	{
		nbr /= 16;
		j++;
	}
	if (!(tmp == 0 && res.c_bool.point == 0))
		j++;
	if (j < res.c_bool.point)
		return (res.c_bool.point + i);
	return (j + i);
}

void	static	sort_order_int_zero(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
				|| (res.c_bool.point >= 0 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (res.c_bool.pos == 1)
		str[index++] = '+';
	else if (res.c_bool.space == 1)
		str[index++] = ' ';
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va)), '0', &index);
	if (res.c_bool.point != 0)
		str[index++] = '0';
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

void	static	sort_order_int_pos(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
//	printf(" len = %d   str = |%s|  \n", len, str);
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (res.c_bool.pos == 1)
		str[index++] = '+';
	else if (res.c_bool.space == 1)
		str[index++] = ' ';
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va)), '0', &index);
	itoa_base_static(va, 16, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print	static	sort_intmax(char *str, t_print res, intmax_t va, int *index)
{
	char	intmin[] = "9223372036854775808";
	int		i;

	i = 0;
	if ((*index) == 0 && res.c_bool.check == 0)
		va++;
	else
	{
		while (i < 19)
		{
			str[*index] = intmin[i];
			i++;
			*index += 1;
		}
	}
	res.c_bool.check = 1;
	return (res);
}


void	static	sort_order_int_neg(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
	if (va == -9223372036854775807 - 1)
		res = sort_intmax(str, res, va, &index);
	va = -va;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.zero == 1 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va)), '0', &index);
	if (res.c_bool.check == 1)
		res = sort_intmax(str, res, va, &index);
	else
		itoa_base_static(va, 16, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print		ft_stock_x(va_list ap, t_print res, intmax_t rsl, long long va)
{
	char		str[32 + res.c_bool.width + res.c_bool.point];
	int			len;

	va = va_arg(ap, intmax_t);
	rsl = (int)va;
	res.c_bool.check = 0;
	if (res.c_bool.specs == 1)
		rsl = ft_specs(res, va);
	len = nbr_len(rsl, res);
	ft_bzero(str, 32 + res.c_bool.width + res.c_bool.point);
	if (rsl < 0)
		sort_order_int_neg(str, res, rsl, len - 1);
	if (rsl > 0)
		sort_order_int_pos(str, res, rsl, len);
	if (rsl == 0)
		sort_order_int_zero(str, res, rsl, len);
	res = strcat_buff(str, res);
	return (res);
}
