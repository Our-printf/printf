#include "../include/ft_printf.h"

t_print		init_bool(t_print res)
{
	res.c_bool.sharp = 0;
	res.c_bool.zero = 0;
	res.c_bool.neg = 0;
	res.c_bool.pos = 0;
	res.c_bool.space = 0;
	res.c_bool.j = 0;
	res.c_bool.z = 0;
	res.c_bool.h = 0;
	res.c_bool.l = 0;
	res.c_bool.point = -1;
	res.c_bool.width = 0;
	res.c_bool.check = 0;
	return (res);
}
