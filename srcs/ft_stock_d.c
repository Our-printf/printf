
#include "../include/ft_printf.h"
t_print		strcat_buff(char *str, t_print res)
{
	int	i;

	i = 0;
	while (str[i])
			res.buf[res.length++] = str[i++];
	return (res);
}

void		strcat_width(char *str, int len, char c, int *index)
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

int			nbr_len2(long long nbr)
{
	long long	i;

	i = 0;
	while (nbr / 10 > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i + 1);
}

int			nbr_len(long long nbr, t_print res)
{
	int			i;
	int			j;
	long long	tmp; 

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
	while (nbr / 10 > 0)
	{
		nbr /= 10;
		j++;
	}
	if (!(tmp == 0 && res.c_bool.point == 0))
		j++;
	if (j < res.c_bool.point)
		return (res.c_bool.point + i);
	return (j + i);
}

void		sort_order_int_zero(char *str, t_print res, int va, int len)
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
//	printf(" 06 \n");
	if (res.c_bool.point != 0)
		str[index++] = '0';
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

void		sort_order_int_pos(char *str, t_print res, int va, int len)
{
	int		index;

	index = 0;
//	printf(" 01 \n");
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
	itoa_base_static(va, 10, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}


void		sort_order_int_neg(char *str, t_print res, int va, int len)
{
	int		index;

	index = 0;
	va = -va;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.zero == 1 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	str[index++] = '-';
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va)), '0', &index);
	itoa_base_static(va, 10, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print		ft_stock_d(va_list ap, t_print res, int rsl, long long va)
{
	char		str[32 + res.c_bool.width + res.c_bool.point];
	int			len;
	
	va = va_arg(ap, long long);
	rsl = (int)va;
	len = nbr_len(rsl, res);
	ft_bzero(str, 32 + res.c_bool.width + res.c_bool.point);
//	printf("VA = %lld", va);
//	printf(" rsl = %d\n", rsl);
//	printf(" len = %d\n", len);
	if (rsl < 0)
		sort_order_int_neg(str, res, rsl, len);
	if (rsl > 0)
		sort_order_int_pos(str, res, rsl, len);
	if (rsl == 0)
		sort_order_int_zero(str, res, rsl, len);
	res = strcat_buff(str, res);
	return (res);
}
