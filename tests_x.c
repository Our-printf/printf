#include "include/ft_printf.h"

void		compil_test_x(int test, int i, int j, int k)
{
	j = printf("%d\n>>%x<<\n", i, 0);
	fflush(stdout);
	k = ft_printf(">>%x<<", 0);
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_test_x1(int test, int j, int k)
{
	j = printf(">>%x<<\n", 0);
	fflush(stdout);
	k = ft_printf(">>%x<<", 0);
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_test_x1_1(int test, int j, int k)
{
	j = printf(">>%oc et %x<<\n", "\0", test);
	fflush(stdout);
	k = ft_printf(">>%oc et %x<<", "\0", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x2_0(int test, int j, int k)
{
	j = printf(">>%.0x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x2_1(int test, int j, int k)
{
	j = printf(">>%.5x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x2_2(int test, int j, int k)
{
	j = printf(">>%.x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x2_3(int test, int j, int k)
{
	j = printf(">>%.34x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x2_4(int test, int j, int k)
{
	j = printf(">>%.010x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x3_0(int test, int j, int k)
{
	j = printf(">>%10x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x3_1(int test, int j, int k)
{
	j = printf(">>%0x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x3_2(int test, int j, int k)
{
	j = printf(">>%34x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x3_3(int test, int j, int k)
{
	j = printf(">>%-10x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x3_4(int test, int j, int k)
{
	j = printf(">>%-30x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x3_5(int test, int j, int k)
{
	j = printf(">>%20o et %15x<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20o et %15x<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_0(int test, int j, int k)
{
	j = printf(">>%-30.1x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_1(int test, int j, int k)
{
	j = printf(">>%-1.30x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_2(int test, int j, int k)
{
	j = printf(">>%30.1x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%30.1x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_3(int test, int j, int k)
{
	j = printf(">>%1.30x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_4(int test, int j, int k)
{
	j = printf(">>%-x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_5(int test, int j, int k)
{
	j = printf(">>%-.30x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x4_6(int test, int j, int k)
{
	j = printf(">>%-.5x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5x<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x5_0(int test, int j, int k)
{
	j = printf(">>%030x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030x<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x5_1(int test, int j, int k)
{
	j = printf(">>%.05x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05x<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x5_2(int test, int j, int k)
{
	j = printf(">>%05x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05x<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x5_3(int test, int j, int k)
{
	j = printf(">>%0.30x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30x<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_x5_4(int test, int j, int k)
{
	j = printf(">>%-05x<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05x<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}



void		test_x(void)
{
	int i = 1;
	int test;

	test = 0;

									//0
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_x(test, 0, 0, 0);
		compil_test_x1(test, i, 0);
		compil_test_x1_1(test, i, 0);
		compil_test_x2_0(test, 0, 0);
		compil_test_x2_1(test, 0, 0);
		compil_test_x2_2(test, 0, 0);
		compil_test_x2_3(test, 0, 0);
		compil_test_x2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x3_0(test, 0, 0);
		compil_test_x3_1(test, 0, 0);
		compil_test_x3_2(test, 0, 0);
		compil_test_x3_3(test, 0, 0);
		compil_test_x3_4(test, 0, 0);
		compil_test_x3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x4_0(test, 0, 0);
		compil_test_x4_1(test, 0, 0);
		compil_test_x4_2(test, 0, 0);
		compil_test_x4_3(test, 0, 0);
		compil_test_x4_4(test, 0, 0);
		compil_test_x4_5(test, 0, 0);
		compil_test_x4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x5_0(test, 0, 0);
		compil_test_x5_1(test, 0, 0);
		compil_test_x5_2(test, 0, 0);
		compil_test_x5_3(test, 0, 0);
		compil_test_x5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = 1234;

									//1
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_x(test, 1, 0, 0);
		compil_test_x1(test, i, 0);
		compil_test_x1_1(test, i, 0);
		compil_test_x2_0(test, 0, 0);
		compil_test_x2_1(test, 0, 0);
		compil_test_x2_2(test, 0, 0);
		compil_test_x2_3(test, 0, 0);
		compil_test_x2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x3_0(test, 0, 0);
		compil_test_x3_1(test, 0, 0);
		compil_test_x3_2(test, 0, 0);
		compil_test_x3_3(test, 0, 0);
		compil_test_x3_4(test, 0, 0);
		compil_test_x3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x4_0(test, 0, 0);
		compil_test_x4_1(test, 0, 0);
		compil_test_x4_2(test, 0, 0);
		compil_test_x4_3(test, 0, 0);
		compil_test_x4_4(test, 0, 0);
		compil_test_x4_5(test, 0, 0);
		compil_test_x4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x5_0(test, 0, 0);
		compil_test_x5_1(test, 0, 0);
		compil_test_x5_2(test, 0, 0);
		compil_test_x5_3(test, 0, 0);
		compil_test_x5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test =  -4567;

									//2
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_x(test, 2, 0, 0);
		compil_test_x1(test, i, 0);
		compil_test_x1_1(test, i, 0);
		compil_test_x2_0(test, 0, 0);
		compil_test_x2_1(test, 0, 0);
		compil_test_x2_2(test, 0, 0);
		compil_test_x2_3(test, 0, 0);
		compil_test_x2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x3_0(test, 0, 0);
		compil_test_x3_1(test, 0, 0);
		compil_test_x3_2(test, 0, 0);
		compil_test_x3_3(test, 0, 0);
		compil_test_x3_4(test, 0, 0);
		compil_test_x3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x4_0(test, 0, 0);
		compil_test_x4_1(test, 0, 0);
		write (1, "\n", 1);
		compil_test_x4_2(test, 0, 0);
		compil_test_x4_3(test, 0, 0);
		compil_test_x4_4(test, 0, 0);
		compil_test_x4_5(test, 0, 0);
		compil_test_x4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x5_0(test, 0, 0);
		compil_test_x5_1(test, 0, 0);
		compil_test_x5_2(test, 0, 0);
		compil_test_x5_3(test, 0, 0);
		compil_test_x5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = 10;

									//3
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_x(test, 3, 0, 0);
		compil_test_x1(test, i, 0);
		compil_test_x1_1(test, i, 0);
		compil_test_x2_0(test, 0, 0);
		compil_test_x2_1(test, 0, 0);
		compil_test_x2_2(test, 0, 0);
		compil_test_x2_3(test, 0, 0);
		compil_test_x2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x3_0(test, 0, 0);
		compil_test_x3_1(test, 0, 0);
		compil_test_x3_2(test, 0, 0);
		compil_test_x3_3(test, 0, 0);
		compil_test_x3_4(test, 0, 0);
		compil_test_x3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x4_0(test, 0, 0);
		compil_test_x4_1(test, 0, 0);
		compil_test_x4_2(test, 0, 0);
		compil_test_x4_3(test, 0, 0);
		compil_test_x4_4(test, 0, 0);
		compil_test_x4_5(test, 0, 0);
		compil_test_x4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x5_0(test, 0, 0);
		compil_test_x5_1(test, 0, 0);
		compil_test_x5_2(test, 0, 0);
		compil_test_x5_3(test, 0, 0);
		compil_test_x5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test =  -2147483648;

									//4
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_x(test, 4, 0, 0);
		compil_test_x1(test, i, 0);
		compil_test_x1_1(test, i, 0);
		compil_test_x2_0(test, 0, 0);
		compil_test_x2_1(test, 0, 0);
		compil_test_x2_2(test, 0, 0);
		compil_test_x2_3(test, 0, 0);
		compil_test_x2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x3_0(test, 0, 0);
		compil_test_x3_1(test, 0, 0);
		compil_test_x3_2(test, 0, 0);
		compil_test_x3_3(test, 0, 0);
		compil_test_x3_4(test, 0, 0);
		compil_test_x3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x4_0(test, 0, 0);
		compil_test_x4_1(test, 0, 0);
		compil_test_x4_2(test, 0, 0);
		compil_test_x4_3(test, 0, 0);
		compil_test_x4_4(test, 0, 0);
		compil_test_x4_5(test, 0, 0);
		compil_test_x4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x5_0(test, 0, 0);
		compil_test_x5_1(test, 0, 0);
		compil_test_x5_2(test, 0, 0);
		compil_test_x5_3(test, 0, 0);
		compil_test_x5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = 2147483647 ;
									//5
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_x(test, 5, 0, 0);
		compil_test_x1(test, i, 0);
		compil_test_x1_1(test, i, 0);
		compil_test_x2_0(test, 0, 0);
		compil_test_x2_1(test, 0, 0);
		compil_test_x2_2(test, 0, 0);
		compil_test_x2_3(test, 0, 0);
		compil_test_x2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x3_0(test, 0, 0);
		compil_test_x3_1(test, 0, 0);
		compil_test_x3_2(test, 0, 0);
		compil_test_x3_3(test, 0, 0);
		compil_test_x3_4(test, 0, 0);
		compil_test_x3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x4_0(test, 0, 0);
		compil_test_x4_1(test, 0, 0);
		compil_test_x4_2(test, 0, 0);
		compil_test_x4_3(test, 0, 0);
		compil_test_x4_4(test, 0, 0);
		compil_test_x4_5(test, 0, 0);
		compil_test_x4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_x5_0(test, 0, 0);
		compil_test_x5_1(test, 0, 0);
		compil_test_x5_2(test, 0, 0);
		compil_test_x5_3(test, 0, 0);
		compil_test_x5_4(test, 0, 0);
		i++;
	}


}
