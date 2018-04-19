#include "include/ft_printf.h"

void		compil_test_c(char test, int i, int j, int k)
{
	j = printf("%d\n>>%c<<\n", i, 0);
	fflush(stdout);
	k = ft_printf(">>%c<<", 0);
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_test_c1(char test, int j, int k)
{
	j = printf(">>%c<<\n", 0);
	fflush(stdout);
	k = ft_printf(">>%c<<", 0);
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_test_c1_1(char test, int j, int k)
{
	j = printf(">>%c et %c<<\n", "\0", test);
	fflush(stdout);
	k = ft_printf(">>%c et %c<<", "\0", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c2_0(char test, int j, int k)
{
	j = printf(">>%.0c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c2_1(char test, int j, int k)
{
	j = printf(">>%.5c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c2_2(char test, int j, int k)
{
	j = printf(">>%.c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c2_3(char test, int j, int k)
{
	j = printf(">>%.34c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c2_4(char test, int j, int k)
{
	j = printf(">>%.010c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c3_0(char test, int j, int k)
{
	j = printf(">>%10c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c3_1(char test, int j, int k)
{
	j = printf(">>%0c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c3_2(char test, int j, int k)
{
	j = printf(">>%34c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c3_3(char test, int j, int k)
{
	j = printf(">>%-10c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c3_4(char test, int j, int k)
{
	j = printf(">>%-30c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c3_5(char test, int j, int k)
{
	j = printf(">>%20c et %15c<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20c et %15c<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_0(char test, int j, int k)
{
	j = printf(">>%-30.1c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_1(char test, int j, int k)
{
	j = printf(">>%-1.30c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_2(char test, int j, int k)
{
	j = printf(">>%30.1c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%30.1c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_3(char test, int j, int k)
{
	j = printf(">>%1.30c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_4(char test, int j, int k)
{
	j = printf(">>%-c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_5(char test, int j, int k)
{
	j = printf(">>%-.30c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c4_6(char test, int j, int k)
{
	j = printf(">>%-.5c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5c<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c5_0(char test, int j, int k)
{
	j = printf(">>%030c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030c<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c5_1(char test, int j, int k)
{
	j = printf(">>%.05c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05c<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c5_2(char test, int j, int k)
{
	j = printf(">>%05c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05c<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c5_3(char test, int j, int k)
{
	j = printf(">>%0.30c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30c<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_c5_4(char test, int j, int k)
{
	j = printf(">>%-05c<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05c<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}


void		test_c(void)
{
	int i = 1;
	char test;

	test = 'S';

	while (i < 2)
	{
		compil_test_c(test, i, 0, 0);
		compil_test_c1(test, i, 0);
		compil_test_c1_1(test, i, 0);
		compil_test_c2_0(test, 0, 0);
		compil_test_c2_1(test, 0, 0);
		compil_test_c2_2(test, 0, 0);
		compil_test_c2_3(test, 0, 0);
		compil_test_c2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_c3_0(test, 0, 0);
		compil_test_c3_1(test, 0, 0);
		compil_test_c3_2(test, 0, 0);
		compil_test_c3_3(test, 0, 0);
		compil_test_c3_4(test, 0, 0);
		compil_test_c3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_c4_0(test, 0, 0);
		compil_test_c4_1(test, 0, 0);
		compil_test_c4_2(test, 0, 0);
		compil_test_c4_3(test, 0, 0);
		compil_test_c4_4(test, 0, 0);
		compil_test_c4_5(test, 0, 0);
		compil_test_c4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_c5_0(test, 0, 0);
		compil_test_c5_1(test, 0, 0);
		compil_test_c5_2(test, 0, 0);
		compil_test_c5_3(test, 0, 0);
		compil_test_c5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = '\0';

	while (i < 2)
	{
		compil_test_c(test, i, 0, 0);
		compil_test_c1(test, i, 0);
		compil_test_c1_1(test, i, 0);
		compil_test_c2_0(test, 0, 0);
		compil_test_c2_1(test, 0, 0);
		compil_test_c2_2(test, 0, 0);
		compil_test_c2_3(test, 0, 0);
		compil_test_c2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_c3_0(test, 0, 0);
		compil_test_c3_1(test, 0, 0);
		compil_test_c3_2(test, 0, 0);
		compil_test_c3_3(test, 0, 0);
		compil_test_c3_4(test, 0, 0);
		compil_test_c3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_c4_0(test, 0, 0);
		compil_test_c4_1(test, 0, 0);
		compil_test_c4_2(test, 0, 0);
		compil_test_c4_3(test, 0, 0);
		compil_test_c4_4(test, 0, 0);
		compil_test_c4_5(test, 0, 0);
		compil_test_c4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_c5_0(test, 0, 0);
		compil_test_c5_1(test, 0, 0);
		compil_test_c5_2(test, 0, 0);
		compil_test_c5_3(test, 0, 0);
		compil_test_c5_4(test, 0, 0);
		i++;
	}

}
