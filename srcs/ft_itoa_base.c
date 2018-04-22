#include "../include/ft_printf.h"

void	itoa_base_static(long value, int base, char *str, int *i)
{
	char	base_str	[] = "0123456789abcdef";

	if (value < 0 && base == 10)
		value = -value;
	if (value >= base)
		itoa_base_static(value / base, base, str, i);
	str[(*i)++] = base_str[value % base];
}

void	itoa_base_static2(long value, int base, char *str, int *i)
{
	char	base_str	[] = "0123456789ABCDEF";

	if (value < 0 && base == 10)
		value = -value;
	if (value >= base)
		itoa_base_static(value / base, base, str, i);
	str[(*i)++] = base_str[value % base];
}
