#include "include/ft_printf.h"

void		compil_test_p(int test, int i, int j, int k)
{
	j = printf("%d\n>>%p<<\n", i, 0);
	fflush(stdout);
	k = ft_printf(">>%p<<", 0);
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_test_p1(int test, int j, int k)
{
	j = printf(">>%p<<\n", 0);
	fflush(stdout);
	k = ft_printf(">>%p<<", 0);
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_test_p1_1(int test, int j, int k)
{
	j = printf(">>%p et %p<<\n", "\0", test);
	fflush(stdout);
	k = ft_printf(">>%p et %p<<", "\0", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p2_0(int test, int j, int k)
{
	j = printf(">>%.0p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p2_1(int test, int j, int k)
{
	j = printf(">>%.5p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p2_2(int test, int j, int k)
{
	j = printf(">>%.p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p2_3(int test, int j, int k)
{
	j = printf(">>%.34p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p2_4(int test, int j, int k)
{
	j = printf(">>%.010p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p3_0(int test, int j, int k)
{
	j = printf(">>%10p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p3_1(int test, int j, int k)
{
	j = printf(">>%0p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p3_2(int test, int j, int k)
{
	j = printf(">>%34p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p3_3(int test, int j, int k)
{
	j = printf(">>%-10p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p3_4(int test, int j, int k)
{
	j = printf(">>%-30p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p3_5(int test, int j, int k)
{
	j = printf(">>%20p et %15p<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20p et %15p<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_0(int test, int j, int k)
{
	j = printf(">>%-30.1p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_1(int test, int j, int k)
{
	j = printf(">>%-1.30p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_2(int test, int j, int k)
{
	j = printf(">>%30.1p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%30.1p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_3(int test, int j, int k)
{
	j = printf(">>%1.30p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_4(int test, int j, int k)
{
	j = printf(">>%-p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_5(int test, int j, int k)
{
	j = printf(">>%-.30p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p4_6(int test, int j, int k)
{
	j = printf(">>%-.5p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5p<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p5_0(int test, int j, int k)
{
	j = printf(">>%030p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030p<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p5_1(int test, int j, int k)
{
	j = printf(">>%.05p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05p<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p5_2(int test, int j, int k)
{
	j = printf(">>%05p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05p<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p5_3(int test, int j, int k)
{
	j = printf(">>%0.30p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30p<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_p5_4(int test, int j, int k)
{
	j = printf(">>%-05p<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05p<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}



void		test_p(void)
{
	int i = 1;
	int test;

	test = 0;

									//0
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_p(test, 0, 0, 0);
		compil_test_p1(test, i, 0);
		compil_test_p1_1(test, i, 0);
		compil_test_p2_0(test, 0, 0);
		compil_test_p2_1(test, 0, 0);
		compil_test_p2_2(test, 0, 0);
		compil_test_p2_3(test, 0, 0);
		compil_test_p2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p3_0(test, 0, 0);
		compil_test_p3_1(test, 0, 0);
		compil_test_p3_2(test, 0, 0);
		compil_test_p3_3(test, 0, 0);
		compil_test_p3_4(test, 0, 0);
		compil_test_p3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p4_0(test, 0, 0);
		compil_test_p4_1(test, 0, 0);
		compil_test_p4_2(test, 0, 0);
		compil_test_p4_3(test, 0, 0);
		compil_test_p4_4(test, 0, 0);
		compil_test_p4_5(test, 0, 0);
		compil_test_p4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p5_0(test, 0, 0);
		compil_test_p5_1(test, 0, 0);
		compil_test_p5_2(test, 0, 0);
		compil_test_p5_3(test, 0, 0);
		compil_test_p5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = -0;

									//1
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_p(test, 1, 0, 0);
		compil_test_p1(test, i, 0);
		compil_test_p1_1(test, i, 0);
		compil_test_p2_0(test, 0, 0);
		compil_test_p2_1(test, 0, 0);
		compil_test_p2_2(test, 0, 0);
		compil_test_p2_3(test, 0, 0);
		compil_test_p2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p3_0(test, 0, 0);
		compil_test_p3_1(test, 0, 0);
		compil_test_p3_2(test, 0, 0);
		compil_test_p3_3(test, 0, 0);
		compil_test_p3_4(test, 0, 0);
		compil_test_p3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p4_0(test, 0, 0);
		compil_test_p4_1(test, 0, 0);
		compil_test_p4_2(test, 0, 0);
		compil_test_p4_3(test, 0, 0);
		compil_test_p4_4(test, 0, 0);
		compil_test_p4_5(test, 0, 0);
		compil_test_p4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p5_0(test, 0, 0);
		compil_test_p5_1(test, 0, 0);
		compil_test_p5_2(test, 0, 0);
		compil_test_p5_3(test, 0, 0);
		compil_test_p5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = '\0';

									//2
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_p(test, 2, 0, 0);
		compil_test_p1(test, i, 0);
		compil_test_p1_1(test, i, 0);
		compil_test_p2_0(test, 0, 0);
		compil_test_p2_1(test, 0, 0);
		compil_test_p2_2(test, 0, 0);
		compil_test_p2_3(test, 0, 0);
		compil_test_p2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p3_0(test, 0, 0);
		compil_test_p3_1(test, 0, 0);
		compil_test_p3_2(test, 0, 0);
		compil_test_p3_3(test, 0, 0);
		compil_test_p3_4(test, 0, 0);
		compil_test_p3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p4_0(test, 0, 0);
		compil_test_p4_1(test, 0, 0);
		write (1, "\n", 1);
		compil_test_p4_2(test, 0, 0);
		compil_test_p4_3(test, 0, 0);
		compil_test_p4_4(test, 0, 0);
		compil_test_p4_5(test, 0, 0);
		compil_test_p4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p5_0(test, 0, 0);
		compil_test_p5_1(test, 0, 0);
		compil_test_p5_2(test, 0, 0);
		compil_test_p5_3(test, 0, 0);
		compil_test_p5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = 10;

									//3
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_p(test, 3, 0, 0);
		compil_test_p1(test, i, 0);
		compil_test_p1_1(test, i, 0);
		compil_test_p2_0(test, 0, 0);
		compil_test_p2_1(test, 0, 0);
		compil_test_p2_2(test, 0, 0);
		compil_test_p2_3(test, 0, 0);
		compil_test_p2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p3_0(test, 0, 0);
		compil_test_p3_1(test, 0, 0);
		compil_test_p3_2(test, 0, 0);
		compil_test_p3_3(test, 0, 0);
		compil_test_p3_4(test, 0, 0);
		compil_test_p3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p4_0(test, 0, 0);
		compil_test_p4_1(test, 0, 0);
		compil_test_p4_2(test, 0, 0);
		compil_test_p4_3(test, 0, 0);
		compil_test_p4_4(test, 0, 0);
		compil_test_p4_5(test, 0, 0);
		compil_test_p4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p5_0(test, 0, 0);
		compil_test_p5_1(test, 0, 0);
		compil_test_p5_2(test, 0, 0);
		compil_test_p5_3(test, 0, 0);
		compil_test_p5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test =  -2147483648;

									//4
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_p(test, 4, 0, 0);
		compil_test_p1(test, i, 0);
		compil_test_p1_1(test, i, 0);
		compil_test_p2_0(test, 0, 0);
		compil_test_p2_1(test, 0, 0);
		compil_test_p2_2(test, 0, 0);
		compil_test_p2_3(test, 0, 0);
		compil_test_p2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p3_0(test, 0, 0);
		compil_test_p3_1(test, 0, 0);
		compil_test_p3_2(test, 0, 0);
		compil_test_p3_3(test, 0, 0);
		compil_test_p3_4(test, 0, 0);
		compil_test_p3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p4_0(test, 0, 0);
		compil_test_p4_1(test, 0, 0);
		compil_test_p4_2(test, 0, 0);
		compil_test_p4_3(test, 0, 0);
		compil_test_p4_4(test, 0, 0);
		compil_test_p4_5(test, 0, 0);
		compil_test_p4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p5_0(test, 0, 0);
		compil_test_p5_1(test, 0, 0);
		compil_test_p5_2(test, 0, 0);
		compil_test_p5_3(test, 0, 0);
		compil_test_p5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = 2147483647 ;
									//5
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_p(test, 5, 0, 0);
		compil_test_p1(test, i, 0);
		compil_test_p1_1(test, i, 0);
		compil_test_p2_0(test, 0, 0);
		compil_test_p2_1(test, 0, 0);
		compil_test_p2_2(test, 0, 0);
		compil_test_p2_3(test, 0, 0);
		compil_test_p2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p3_0(test, 0, 0);
		compil_test_p3_1(test, 0, 0);
		compil_test_p3_2(test, 0, 0);
		compil_test_p3_3(test, 0, 0);
		compil_test_p3_4(test, 0, 0);
		compil_test_p3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p4_0(test, 0, 0);
		compil_test_p4_1(test, 0, 0);
		compil_test_p4_2(test, 0, 0);
		compil_test_p4_3(test, 0, 0);
		compil_test_p4_4(test, 0, 0);
		compil_test_p4_5(test, 0, 0);
		compil_test_p4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_p5_0(test, 0, 0);
		compil_test_p5_1(test, 0, 0);
		compil_test_p5_2(test, 0, 0);
		compil_test_p5_3(test, 0, 0);
		compil_test_p5_4(test, 0, 0);
		i++;
	}


}
