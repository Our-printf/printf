#include "./include/ft_printf.h"
#include <limits.h>
#include "locale.h"

/*
void	test_per(void);
void	test_d(void);
void	test_x(void);
void	test_p(void);
void	test_c(void);
void	test_lc(void);
void	test_s(void);
void	test_ls(void);


*/
int		main(int ac, char **av)
{
	char c;

	setlocale(LC_ALL, "");
	ac = 2;
	ft_printf("01>>%C<<\n", L'플');
	printf("01>>%C<<\n", L'플');
	fflush(stdout);

	ft_printf("02||%d||%u||%u||\n", 123456, -100000, 100000);
	printf("02||%d||%u||%u||\n", 123456, -100000, 100000);
	fflush(stdout);
	ft_printf("03>>%u|%d|%u|%p|%u|%S|%u|%o|%u|%U<<\n\n", 100000, 41, 100000, &c, 100000, L"暖炉", 100001, 42, 100000, ULONG_MAX);
	printf("03||%u|%d|%u|%p|%u|%S|%u|%o|%u|%U||\n", 100000, 41, 100000, &c, 100000, L"暖炉", 100001, 42, 100000, ULONG_MAX);
	fflush(stdout);

	ft_printf(NULL);
	printf(NULL);
	fflush(stdout);

	ft_printf("%.s", (char *)42);
	printf("%.s", (char *)42);
	fflush(stdout);

	test_per();
	test_d();
	test_x();
	test_p();
	test_c();
	test_lc();
	test_s();
	test_ls();


	return (0);
}
