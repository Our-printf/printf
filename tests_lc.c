#include "include/ft_printf.h"

void		compil_test_lc(unsigned char *test, int i, int j, int k)
{
	j = printf("%d\n>>%lc<<\n", i, 0);
	fflush(stdout);
	k = ft_printf(">>%lc<<", 0);
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_test_lc1(unsigned char *test, int j, int k)
{
	j = printf(">>%lc<<\n", 0);
	fflush(stdout);
	k = ft_printf(">>%lc<<", 0);
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_test_lc1_1(unsigned char *test, int j, int k)
{
	j = printf(">>%c et %lc<<\n", "\0", test);
	fflush(stdout);
	k = ft_printf(">>%c et %lc<<", "\0", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc2_0(unsigned char *test, int j, int k)
{
	j = printf(">>%.0lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc2_1(unsigned char *test, int j, int k)
{
	j = printf(">>%.5lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc2_2(unsigned char *test, int j, int k)
{
	j = printf(">>%.lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc2_3(unsigned char *test, int j, int k)
{
	j = printf(">>%.34lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc2_4(unsigned char *test, int j, int k)
{
	j = printf(">>%.010lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc3_0(unsigned char *test, int j, int k)
{
	j = printf(">>%10lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc3_1(unsigned char *test, int j, int k)
{
	j = printf(">>%0lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc3_2(unsigned char *test, int j, int k)
{
	j = printf(">>%34lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc3_3(unsigned char *test, int j, int k)
{
	j = printf(">>%-10lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc3_4(unsigned char *test, int j, int k)
{
	j = printf(">>%-30lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc3_5(unsigned char *test, int j, int k)
{
	j = printf(">>%20c et %15lc<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20c et %15lc<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_0(unsigned char *test, int j, int k)
{
	j = printf(">>%-30.1lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_1(unsigned char *test, int j, int k)
{
	j = printf(">>%-1.30lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_2(unsigned char *test, int j, int k)
{
	j = printf(">>%30.1lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%30.1lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_3(unsigned char *test, int j, int k)
{
	j = printf(">>%1.30lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_4(unsigned char *test, int j, int k)
{
	j = printf(">>%-lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_5(unsigned char *test, int j, int k)
{
	j = printf(">>%-.30lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc4_6(unsigned char *test, int j, int k)
{
	j = printf(">>%-.5lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5lc<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc5_0(unsigned char *test, int j, int k)
{
	j = printf(">>%030lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030lc<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc5_1(unsigned char *test, int j, int k)
{
	j = printf(">>%.05lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05lc<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc5_2(unsigned char *test, int j, int k)
{
	j = printf(">>%05lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05lc<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc5_3(unsigned char *test, int j, int k)
{
	j = printf(">>%0.30lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30lc<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_lc5_4(unsigned char *test, int j, int k)
{
	j = printf(">>%-05lc<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05lc<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}



void		test_lc(void)
{
	int i = 1;
	unsigned char *test;

	test = 2000;
	write (1, "\n", 1);

	while (i < 2)
	{
		compil_test_lc(test, 0, 0, 0);
		compil_test_lc1(test, i, 0);
		compil_test_lc1_1(test, i, 0);
		compil_test_lc2_0(test, 0, 0);
		compil_test_lc2_1(test, 0, 0);
		compil_test_lc2_2(test, 0, 0);
		compil_test_lc2_3(test, 0, 0);
		compil_test_lc2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc3_0(test, 0, 0);
		compil_test_lc3_1(test, 0, 0);
		compil_test_lc3_2(test, 0, 0);
		compil_test_lc3_3(test, 0, 0);
		compil_test_lc3_4(test, 0, 0);
		compil_test_lc3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc4_0(test, 0, 0);
		compil_test_lc4_1(test, 0, 0);
		compil_test_lc4_2(test, 0, 0);
		compil_test_lc4_3(test, 0, 0);
		compil_test_lc4_4(test, 0, 0);
		compil_test_lc4_5(test, 0, 0);
		compil_test_lc4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc5_0(test, 0, 0);
		compil_test_lc5_1(test, 0, 0);
		compil_test_lc5_2(test, 0, 0);
		compil_test_lc5_3(test, 0, 0);
		compil_test_lc5_4(test, 0, 0);
		i++;
	}

	i = 1;
	test = '\0';
	write (1, "\n", 1);

	while (i < 2)
	{
		compil_test_lc(test, 1, 0, 0);
		compil_test_lc1(test, i, 0);
		compil_test_lc1_1(test, i, 0);
		compil_test_lc2_0(test, 0, 0);
		compil_test_lc2_1(test, 0, 0);
		compil_test_lc2_2(test, 0, 0);
		compil_test_lc2_3(test, 0, 0);
		compil_test_lc2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc3_0(test, 0, 0);
		compil_test_lc3_1(test, 0, 0);
		compil_test_lc3_2(test, 0, 0);
		compil_test_lc3_3(test, 0, 0);
		compil_test_lc3_4(test, 0, 0);
		compil_test_lc3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc4_0(test, 0, 0);
		compil_test_lc4_1(test, 0, 0);
		compil_test_lc4_2(test, 0, 0);
		compil_test_lc4_3(test, 0, 0);
		compil_test_lc4_4(test, 0, 0);
		compil_test_lc4_5(test, 0, 0);
		compil_test_lc4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc5_0(test, 0, 0);
		compil_test_lc5_1(test, 0, 0);
		compil_test_lc5_2(test, 0, 0);
		compil_test_lc5_3(test, 0, 0);
		compil_test_lc5_4(test, 0, 0);
		i++;
	}

	
	i = 1;
	test = 49000;
	write (1, "\n", 1);
	while (i < 2)
	{
		compil_test_lc(test, 2, 0, 0);
		compil_test_lc1(test, i, 0);
		compil_test_lc1_1(test, i, 0);
		compil_test_lc2_0(test, 0, 0);
		compil_test_lc2_1(test, 0, 0);
		compil_test_lc2_2(test, 0, 0);
		compil_test_lc2_3(test, 0, 0);
		compil_test_lc2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc3_0(test, 0, 0);
		compil_test_lc3_1(test, 0, 0);
		compil_test_lc3_2(test, 0, 0);
		compil_test_lc3_3(test, 0, 0);
		compil_test_lc3_4(test, 0, 0);
		compil_test_lc3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc4_0(test, 0, 0);
		compil_test_lc4_1(test, 0, 0);
		compil_test_lc4_2(test, 0, 0);
		compil_test_lc4_3(test, 0, 0);
		compil_test_lc4_4(test, 0, 0);
		compil_test_lc4_5(test, 0, 0);
		compil_test_lc4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc5_0(test, 0, 0);
		compil_test_lc5_1(test, 0, 0);
		compil_test_lc5_2(test, 0, 0);
		compil_test_lc5_3(test, 0, 0);
		compil_test_lc5_4(test, 0, 0);
		i++;
	}

	
	i = 1;
	test = 89389;
	write (1, "\n", 1);

	while (i < 2)
	{
		compil_test_lc(test, 3, 0, 0);
		compil_test_lc1(test, i, 0);
		compil_test_lc1_1(test, i, 0);
		compil_test_lc2_0(test, 0, 0);
		compil_test_lc2_1(test, 0, 0);
		compil_test_lc2_2(test, 0, 0);
		compil_test_lc2_3(test, 0, 0);
		compil_test_lc2_4(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc3_0(test, 0, 0);
		compil_test_lc3_1(test, 0, 0);
		compil_test_lc3_2(test, 0, 0);
		compil_test_lc3_3(test, 0, 0);
		compil_test_lc3_4(test, 0, 0);
		compil_test_lc3_5(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc4_0(test, 0, 0);
		compil_test_lc4_1(test, 0, 0);
		compil_test_lc4_2(test, 0, 0);
		compil_test_lc4_3(test, 0, 0);
		compil_test_lc4_4(test, 0, 0);
		compil_test_lc4_5(test, 0, 0);
		compil_test_lc4_6(test, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_lc5_0(test, 0, 0);
		compil_test_lc5_1(test, 0, 0);
		compil_test_lc5_2(test, 0, 0);
		compil_test_lc5_3(test, 0, 0);
		compil_test_lc5_4(test, 0, 0);
		i++;
	}
}
