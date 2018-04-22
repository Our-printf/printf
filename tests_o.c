#include "include/ft_printf.h"

void		compil_test_o(int test, int i, int j, int k)
{
	j = printf("%d\n>>%o<<\n", i, 0);
	fflush(stdout);
	k = ft_printf(">>%o<<", 0);
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_test_o1(int test, int j, int k)
{
	j = printf(">>%o<<\n", 0);
	fflush(stdout);
	k = ft_printf(">>%o<<", 0);
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_test_o1_1(int test, int j, int k)
{
	j = printf(">>%oc et %o<<\n", "\0", test);
	fflush(stdout);
	k = ft_printf(">>%oc et %o<<", "\0", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o2_0(int test, int j, int k)
{
	j = printf(">>%.0o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o2_1(int test, int j, int k)
{
	j = printf(">>%.5o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o2_2(int test, int j, int k)
{
	j = printf(">>%.o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o2_3(int test, int j, int k)
{
	j = printf(">>%.34o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o2_4(int test, int j, int k)
{
	j = printf(">>%.010o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o3_0(int test, int j, int k)
{
	j = printf(">>%10o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o3_1(int test, int j, int k)
{
	j = printf(">>%0o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o3_2(int test, int j, int k)
{
	j = printf(">>%34o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o3_3(int test, int j, int k)
{
	j = printf(">>%-10o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o3_4(int test, int j, int k)
{
	j = printf(">>%-30o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o3_5(int test, int j, int k)
{
	j = printf(">>%20o et %15o<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20o et %15o<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_0(int test, int j, int k)
{
	j = printf(">>%-30.1o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_1(int test, int j, int k)
{
	j = printf(">>%-1.30o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_2(int test, int j, int k)
{
	j = printf(">>%30.1o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%30.1o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_3(int test, int j, int k)
{
	j = printf(">>%1.30o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_4(int test, int j, int k)
{
	j = printf(">>%-o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_5(int test, int j, int k)
{
	j = printf(">>%-.30o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o4_6(int test, int j, int k)
{
	j = printf(">>%-.5o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5o<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o5_0(int test, int j, int k)
{
	j = printf(">>%030o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030o<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o5_1(int test, int j, int k)
{
	j = printf(">>%.05o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05o<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o5_2(int test, int j, int k)
{
	j = printf(">>%05o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05o<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o5_3(int test, int j, int k)
{
	j = printf(">>%0.30o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30o<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_o5_4(int test, int j, int k)
{
	j = printf(">>%-05o<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05o<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}



void		test_o(void)
{
	int i = 1;
	int test;

	test = 0;

									//0
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_o(test, 0, 0, 0);
		compil_test_o1(test, i, 0);
		compil_test_o1_1(test, i, 0);
		compil_test_o2_0(test, 0, 0);
		compil_test_o2_1(test, 0, 0);
		compil_test_o2_2(test, 0, 0);
		compil_test_o2_3(test, 0, 0);
		compil_test_o2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o3_0(test, 0, 0);
		compil_test_o3_1(test, 0, 0);
		compil_test_o3_2(test, 0, 0);
		compil_test_o3_3(test, 0, 0);
		compil_test_o3_4(test, 0, 0);
		compil_test_o3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o4_0(test, 0, 0);
		compil_test_o4_1(test, 0, 0);
		compil_test_o4_2(test, 0, 0);
		compil_test_o4_3(test, 0, 0);
		compil_test_o4_4(test, 0, 0);
		compil_test_o4_5(test, 0, 0);
		compil_test_o4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o5_0(test, 0, 0);
		compil_test_o5_1(test, 0, 0);
		compil_test_o5_2(test, 0, 0);
		compil_test_o5_3(test, 0, 0);
		compil_test_o5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = -0;

									//1
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_o(test, 1, 0, 0);
		compil_test_o1(test, i, 0);
		compil_test_o1_1(test, i, 0);
		compil_test_o2_0(test, 0, 0);
		compil_test_o2_1(test, 0, 0);
		compil_test_o2_2(test, 0, 0);
		compil_test_o2_3(test, 0, 0);
		compil_test_o2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o3_0(test, 0, 0);
		compil_test_o3_1(test, 0, 0);
		compil_test_o3_2(test, 0, 0);
		compil_test_o3_3(test, 0, 0);
		compil_test_o3_4(test, 0, 0);
		compil_test_o3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o4_0(test, 0, 0);
		compil_test_o4_1(test, 0, 0);
		compil_test_o4_2(test, 0, 0);
		compil_test_o4_3(test, 0, 0);
		compil_test_o4_4(test, 0, 0);
		compil_test_o4_5(test, 0, 0);
		compil_test_o4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o5_0(test, 0, 0);
		compil_test_o5_1(test, 0, 0);
		compil_test_o5_2(test, 0, 0);
		compil_test_o5_3(test, 0, 0);
		compil_test_o5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = '\0';

									//2
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_o(test, 2, 0, 0);
		compil_test_o1(test, i, 0);
		compil_test_o1_1(test, i, 0);
		compil_test_o2_0(test, 0, 0);
		compil_test_o2_1(test, 0, 0);
		compil_test_o2_2(test, 0, 0);
		compil_test_o2_3(test, 0, 0);
		compil_test_o2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o3_0(test, 0, 0);
		compil_test_o3_1(test, 0, 0);
		compil_test_o3_2(test, 0, 0);
		compil_test_o3_3(test, 0, 0);
		compil_test_o3_4(test, 0, 0);
		compil_test_o3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o4_0(test, 0, 0);
		compil_test_o4_1(test, 0, 0);
		write (1, "\n", 1);
		compil_test_o4_2(test, 0, 0);
		compil_test_o4_3(test, 0, 0);
		compil_test_o4_4(test, 0, 0);
		compil_test_o4_5(test, 0, 0);
		compil_test_o4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o5_0(test, 0, 0);
		compil_test_o5_1(test, 0, 0);
		compil_test_o5_2(test, 0, 0);
		compil_test_o5_3(test, 0, 0);
		compil_test_o5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = 10;

									//3
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_o(test, 3, 0, 0);
		compil_test_o1(test, i, 0);
		compil_test_o1_1(test, i, 0);
		compil_test_o2_0(test, 0, 0);
		compil_test_o2_1(test, 0, 0);
		compil_test_o2_2(test, 0, 0);
		compil_test_o2_3(test, 0, 0);
		compil_test_o2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o3_0(test, 0, 0);
		compil_test_o3_1(test, 0, 0);
		compil_test_o3_2(test, 0, 0);
		compil_test_o3_3(test, 0, 0);
		compil_test_o3_4(test, 0, 0);
		compil_test_o3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o4_0(test, 0, 0);
		compil_test_o4_1(test, 0, 0);
		compil_test_o4_2(test, 0, 0);
		compil_test_o4_3(test, 0, 0);
		compil_test_o4_4(test, 0, 0);
		compil_test_o4_5(test, 0, 0);
		compil_test_o4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o5_0(test, 0, 0);
		compil_test_o5_1(test, 0, 0);
		compil_test_o5_2(test, 0, 0);
		compil_test_o5_3(test, 0, 0);
		compil_test_o5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test =  -2147483648;

									//4
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_o(test, 4, 0, 0);
		compil_test_o1(test, i, 0);
		compil_test_o1_1(test, i, 0);
		compil_test_o2_0(test, 0, 0);
		compil_test_o2_1(test, 0, 0);
		compil_test_o2_2(test, 0, 0);
		compil_test_o2_3(test, 0, 0);
		compil_test_o2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o3_0(test, 0, 0);
		compil_test_o3_1(test, 0, 0);
		compil_test_o3_2(test, 0, 0);
		compil_test_o3_3(test, 0, 0);
		compil_test_o3_4(test, 0, 0);
		compil_test_o3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o4_0(test, 0, 0);
		compil_test_o4_1(test, 0, 0);
		compil_test_o4_2(test, 0, 0);
		compil_test_o4_3(test, 0, 0);
		compil_test_o4_4(test, 0, 0);
		compil_test_o4_5(test, 0, 0);
		compil_test_o4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o5_0(test, 0, 0);
		compil_test_o5_1(test, 0, 0);
		compil_test_o5_2(test, 0, 0);
		compil_test_o5_3(test, 0, 0);
		compil_test_o5_4(test, 0, 0);
		i++;
	}


	i = 1;
	test = 2147483647 ;
									//5
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_o(test, 5, 0, 0);
		compil_test_o1(test, i, 0);
		compil_test_o1_1(test, i, 0);
		compil_test_o2_0(test, 0, 0);
		compil_test_o2_1(test, 0, 0);
		compil_test_o2_2(test, 0, 0);
		compil_test_o2_3(test, 0, 0);
		compil_test_o2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o3_0(test, 0, 0);
		compil_test_o3_1(test, 0, 0);
		compil_test_o3_2(test, 0, 0);
		compil_test_o3_3(test, 0, 0);
		compil_test_o3_4(test, 0, 0);
		compil_test_o3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o4_0(test, 0, 0);
		compil_test_o4_1(test, 0, 0);
		compil_test_o4_2(test, 0, 0);
		compil_test_o4_3(test, 0, 0);
		compil_test_o4_4(test, 0, 0);
		compil_test_o4_5(test, 0, 0);
		compil_test_o4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_o5_0(test, 0, 0);
		compil_test_o5_1(test, 0, 0);
		compil_test_o5_2(test, 0, 0);
		compil_test_o5_3(test, 0, 0);
		compil_test_o5_4(test, 0, 0);
		i++;
	}


}
