#include "include/ft_printf.h"

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_printf("%s\n", av[1]);
	return (0);
}
