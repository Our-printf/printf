#include "../include/ft_printf.h"

t_bool	init_bool(t_bool bool_tab)
{
	bool_tab.sharp = 0;
	bool_tab.zero = 0;
	bool_tab.neg = 0;
	bool_tab.pos = 0;
	bool_tab.space = 0;
	bool_tab.j = 0;
	bool_tab.z = 0;
	bool_tab.h = 0;
	bool_tab.l = 0;
	bool_tab.point = 0;
	bool_tab.width = 0;
	bool_tab.check = 0;
	return (bool_tab);
}
