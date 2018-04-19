#include "include/ft_printf.h"

void		compil_test_d(int test, int i, int j, int k)
{
	j = printf("%d\n>>%d<<\n", i, 0);
	fflush(stdout);
	k = ft_printf(">>%d<<", 0);
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_test_d1(int test, int j, int k)
{
	j = printf(">>%d<<\n", 0);
	fflush(stdout);
	k = ft_printf(">>%d<<", 0);
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_test_d1_1(int test, int j, int k)
{
	j = printf(">>%dc et %d<<\n", "\0", test);
	fflush(stdout);
	k = ft_printf(">>%dc et %d<<", "\0", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d2_0(int test, int j, int k)
{
	j = printf(">>%.0d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d2_1(int test, int j, int k)
{
	j = printf(">>%.5d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d2_2(int test, int j, int k)
{
	j = printf(">>%.d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d2_3(int test, int j, int k)
{
	j = printf(">>%.34d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d2_4(int test, int j, int k)
{
	j = printf(">>%.010d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d3_0(int test, int j, int k)
{
	j = printf(">>%10d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d3_1(int test, int j, int k)
{
	j = printf(">>%0d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d3_2(int test, int j, int k)
{
	j = printf(">>%34d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d3_3(int test, int j, int k)
{
	j = printf(">>%-10d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d3_4(int test, int j, int k)
{
	j = printf(">>%-30d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d3_5(int test, int j, int k)
{
	j = printf(">>%20d et %15d<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20d et %15d<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_0(int test, int j, int k)
{
	j = printf(">>%-30.1d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_1(int test, int j, int k)
{
	j = printf(">>%-1.30d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_2(int test, int j, int k)
{
	j = printf(">>%30.1d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%30.1d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_3(int test, int j, int k)
{
	j = printf(">>%1.30d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_4(int test, int j, int k)
{
	j = printf(">>%-d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_5(int test, int j, int k)
{
	j = printf(">>%-.30d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d4_6(int test, int j, int k)
{
	j = printf(">>%-.5d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5d<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d5_0(int test, int j, int k)
{
	j = printf(">>%030d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030d<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d5_1(int test, int j, int k)
{
	j = printf(">>%.05d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05d<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d5_2(int test, int j, int k)
{
	j = printf(">>%05d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05d<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d5_3(int test, int j, int k)
{
	j = printf(">>%0.30d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30d<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_d5_4(int test, int j, int k)
{
	j = printf(">>%-05d<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05d<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}



void		test_d(void)
{
	int i = 1;
	int test;

	test = 0;

									//0
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_d(test, 0, 0, 0);
		compil_test_d1(test, i, 0);
		compil_test_d1_1(test, i, 0);
		compil_test_d2_0(test, 0, 0);
		compil_test_d2_1(test, 0, 0);
		compil_test_d2_2(test, 0, 0);
		compil_test_d2_3(test, 0, 0);
		compil_test_d2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d3_0(test, 0, 0);
		compil_test_d3_1(test, 0, 0);
		compil_test_d3_2(test, 0, 0);
		compil_test_d3_3(test, 0, 0);
		compil_test_d3_4(test, 0, 0);
		compil_test_d3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d4_0(test, 0, 0);
		compil_test_d4_1(test, 0, 0);
		compil_test_d4_2(test, 0, 0);
		compil_test_d4_3(test, 0, 0);
		compil_test_d4_4(test, 0, 0);
		compil_test_d4_5(test, 0, 0);
		compil_test_d4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d5_0(test, 0, 0);
		compil_test_d5_1(test, 0, 0);
		compil_test_d5_2(test, 0, 0);
		compil_test_d5_3(test, 0, 0);
		compil_test_d5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = -0;

									//1
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_d(test, 1, 0, 0);
		compil_test_d1(test, i, 0);
		compil_test_d1_1(test, i, 0);
		compil_test_d2_0(test, 0, 0);
		compil_test_d2_1(test, 0, 0);
		compil_test_d2_2(test, 0, 0);
		compil_test_d2_3(test, 0, 0);
		compil_test_d2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d3_0(test, 0, 0);
		compil_test_d3_1(test, 0, 0);
		compil_test_d3_2(test, 0, 0);
		compil_test_d3_3(test, 0, 0);
		compil_test_d3_4(test, 0, 0);
		compil_test_d3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d4_0(test, 0, 0);
		compil_test_d4_1(test, 0, 0);
		compil_test_d4_2(test, 0, 0);
		compil_test_d4_3(test, 0, 0);
		compil_test_d4_4(test, 0, 0);
		compil_test_d4_5(test, 0, 0);
		compil_test_d4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d5_0(test, 0, 0);
		compil_test_d5_1(test, 0, 0);
		compil_test_d5_2(test, 0, 0);
		compil_test_d5_3(test, 0, 0);
		compil_test_d5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = '\0';

									//2
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_d(test, 2, 0, 0);
		compil_test_d1(test, i, 0);
		compil_test_d1_1(test, i, 0);
		compil_test_d2_0(test, 0, 0);
		compil_test_d2_1(test, 0, 0);
		compil_test_d2_2(test, 0, 0);
		compil_test_d2_3(test, 0, 0);
		compil_test_d2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d3_0(test, 0, 0);
		compil_test_d3_1(test, 0, 0);
		compil_test_d3_2(test, 0, 0);
		compil_test_d3_3(test, 0, 0);
		compil_test_d3_4(test, 0, 0);
		compil_test_d3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d4_0(test, 0, 0);
		compil_test_d4_1(test, 0, 0);
		write (1, "\n", 1);
		compil_test_d4_2(test, 0, 0);
		compil_test_d4_3(test, 0, 0);
		compil_test_d4_4(test, 0, 0);
		compil_test_d4_5(test, 0, 0);
		compil_test_d4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d5_0(test, 0, 0);
		compil_test_d5_1(test, 0, 0);
		compil_test_d5_2(test, 0, 0);
		compil_test_d5_3(test, 0, 0);
		compil_test_d5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = 10;

									//3
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_d(test, 3, 0, 0);
		compil_test_d1(test, i, 0);
		compil_test_d1_1(test, i, 0);
		compil_test_d2_0(test, 0, 0);
		compil_test_d2_1(test, 0, 0);
		compil_test_d2_2(test, 0, 0);
		compil_test_d2_3(test, 0, 0);
		compil_test_d2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d3_0(test, 0, 0);
		compil_test_d3_1(test, 0, 0);
		compil_test_d3_2(test, 0, 0);
		compil_test_d3_3(test, 0, 0);
		compil_test_d3_4(test, 0, 0);
		compil_test_d3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d4_0(test, 0, 0);
		compil_test_d4_1(test, 0, 0);
		compil_test_d4_2(test, 0, 0);
		compil_test_d4_3(test, 0, 0);
		compil_test_d4_4(test, 0, 0);
		compil_test_d4_5(test, 0, 0);
		compil_test_d4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d5_0(test, 0, 0);
		compil_test_d5_1(test, 0, 0);
		compil_test_d5_2(test, 0, 0);
		compil_test_d5_3(test, 0, 0);
		compil_test_d5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test =  -2147483648;

									//4
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_d(test, 4, 0, 0);
		compil_test_d1(test, i, 0);
		compil_test_d1_1(test, i, 0);
		compil_test_d2_0(test, 0, 0);
		compil_test_d2_1(test, 0, 0);
		compil_test_d2_2(test, 0, 0);
		compil_test_d2_3(test, 0, 0);
		compil_test_d2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d3_0(test, 0, 0);
		compil_test_d3_1(test, 0, 0);
		compil_test_d3_2(test, 0, 0);
		compil_test_d3_3(test, 0, 0);
		compil_test_d3_4(test, 0, 0);
		compil_test_d3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d4_0(test, 0, 0);
		compil_test_d4_1(test, 0, 0);
		compil_test_d4_2(test, 0, 0);
		compil_test_d4_3(test, 0, 0);
		compil_test_d4_4(test, 0, 0);
		compil_test_d4_5(test, 0, 0);
		compil_test_d4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d5_0(test, 0, 0);
		compil_test_d5_1(test, 0, 0);
		compil_test_d5_2(test, 0, 0);
		compil_test_d5_3(test, 0, 0);
		compil_test_d5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = 2147483647 ;
									//5
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_d(test, 5, 0, 0);
		compil_test_d1(test, i, 0);
		compil_test_d1_1(test, i, 0);
		compil_test_d2_0(test, 0, 0);
		compil_test_d2_1(test, 0, 0);
		compil_test_d2_2(test, 0, 0);
		compil_test_d2_3(test, 0, 0);
		compil_test_d2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d3_0(test, 0, 0);
		compil_test_d3_1(test, 0, 0);
		compil_test_d3_2(test, 0, 0);
		compil_test_d3_3(test, 0, 0);
		compil_test_d3_4(test, 0, 0);
		compil_test_d3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d4_0(test, 0, 0);
		compil_test_d4_1(test, 0, 0);
		compil_test_d4_2(test, 0, 0);
		compil_test_d4_3(test, 0, 0);
		compil_test_d4_4(test, 0, 0);
		compil_test_d4_5(test, 0, 0);
		compil_test_d4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_d5_0(test, 0, 0);
		compil_test_d5_1(test, 0, 0);
		compil_test_d5_2(test, 0, 0);
		compil_test_d5_3(test, 0, 0);
		compil_test_d5_4(test, 0, 0);
		i++;
	}


}
