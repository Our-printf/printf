#include "my_printf.h"



int			ft_printf(const char *str, ...)
{
	t_print		res;
	va_list		ap;

	res.i = 0;
	res.j = 0;
	ft_bzero(res.text, BUFF_SIZE);
	va_start(ap, str);
	while (str[res.j])
	{
		while (str[res.j] == '%')
		{
			if (str[res.j] == '%')
			{

			}
		}
		if (str[res.j])
			res.text[res.i++] = str[res.j++];
	}
}
