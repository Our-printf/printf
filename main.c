#include "./include/ft_printf.h"
#include <limits.h>
#include "locale.h"

int		main(int ac, char **av)
{
	char c;

	setlocale(LC_ALL, "");
	ac = 2;
//	ft_printf(">>%C<<\n", L'플');
//	printf(">>%C<<\n", L'플');
//	fflush(stdout);

//	ft_printf("||%d||%u||%u||\n", 123456, -100000, 100000);
//	printf("||%d||%u||%u||\n", 123456, -100000, 100000);
//	fflush(stdout);
	ft_printf(">>%u|%d|%u|%p|%u|%S|%u|%o|%u|%U<<\n\n", 100000, 41, 100000, &c, 100000, L"暖炉", 100001, 42, 100000, ULONG_MAX);
       printf("||%u|%d|%u|%p|%u|%S|%u|%o|%u|%U||\n", 100000, 41, 100000, &c, 100000, L"暖炉", 100001, 42, 100000, ULONG_MAX);
	fflush(stdout);
	return (0);
}

