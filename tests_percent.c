#include "include/ft_printf.h"

void		compil_testper(int i, int j, int k)
{
	j = printf("%d\n>>%%<<\n", i);
	fflush(stdout);
	k = ft_printf(">>%%<<");
	fflush(stdout);
	printf("				Diff = %d\n", (j - k - 3));
	fflush(stdout);
}

void		compil_testper1(int j, int k)
{
	j = printf(">>%%<<\n");
	fflush(stdout);
	k = ft_printf(">>%%<<");
	printf("				Diff = %d\n", (j - k - 1));
	fflush(stdout);
}

void		compil_testper1_1(int j, int k)
{
	j = printf(">>%% et %%<<\n");
	fflush(stdout);
	k = ft_printf(">>%% et %%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper2_0(int j, int k)
{
	j = printf(">>%.0%<<\n");
	fflush(stdout);
	k = ft_printf(">>%.0%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper2_1(int j, int k)
{
	j = printf(">>%.5%<<\n");
	fflush(stdout);
	k = ft_printf(">>%.5%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper2_2(int j, int k)
{
	j = printf(">>%.%<<\n");
	fflush(stdout);
	k = ft_printf(">>%.%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper2_3(int j, int k)
{
	j = printf(">>%.34%<<\n");
	fflush(stdout);
	k = ft_printf(">>%.34%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper2_4(int j, int k)
{
	j = printf(">>%.010%<<\n");
	fflush(stdout);
	k = ft_printf(">>%.010%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper3_0(int j, int k)
{
	j = printf(">>%10%<<\n");
	fflush(stdout);
	k = ft_printf(">>%10%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper3_1(int j, int k)
{
	j = printf(">>%0%<<\n");
	fflush(stdout);
	k = ft_printf(">>%0%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper3_2(int j, int k)
{
	j = printf(">>%34%<<\n");
	fflush(stdout);
	k = ft_printf(">>%34%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper3_3(int j, int k)
{
	j = printf(">>%-10%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-10%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper3_4(int j, int k)
{
	j = printf(">>%-30%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-30%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper3_5(int j, int k)
{
	j = printf(">>%20% et %15%<<\n");
	fflush(stdout);
	k = ft_printf(">>%20% et %15%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_0(int j, int k)
{
	j = printf(">>%-30.1%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-30.1%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_1(int j, int k)
{
	j = printf(">>%-1.30%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-1.30%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_2(int j, int k)
{
	j = printf(">>%30.1%<<\n");
	fflush(stdout);
	k = ft_printf(">>%30.1%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_3(int j, int k)
{
	j = printf(">>%1.30%<<\n");
	fflush(stdout);
	k = ft_printf(">>%1.30%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_4(int j, int k)
{
	j = printf(">>%-%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_5(int j, int k)
{
	j = printf(">>%-.30%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-.30%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper4_6(int j, int k)
{
	j = printf(">>%-.5%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-.5%<<");
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_0(int j, int k)
{
	j = printf(">>%030%<<\n");
	fflush(stdout);
	k = ft_printf(">>%030%<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_1(int j, int k)
{
	j = printf(">>%.05%<<\n");
	fflush(stdout);
	k = ft_printf(">>%.05%<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_2(int j, int k)
{
	j = printf(">>%05%<<\n");
	fflush(stdout);
	k = ft_printf(">>%05%<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_3(int j, int k)
{
	j = printf(">>%0.30%<<\n");
	fflush(stdout);
	k = ft_printf(">>%0.30%<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_4(int j, int k)
{
	j = printf(">>%-05%<<\n");
	fflush(stdout);
	k = ft_printf(">>%-05%<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_5(int j, int k)
{
	j = printf("4567 |%-10]5d| plip\n", 12);
	fflush(stdout);
	k = ft_printf("4567 |%-10]5d| plip", 12);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_testper5_6(int j, int k)
{
	j = printf("4567 |%10]5d| plip\n", 12);
	fflush(stdout);
	k = ft_printf("4567 |%10]5d| plip", 12);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}


void		test_per(void)
{
	int i = 1;

	while (i < 2)
	{
		compil_testper(i, 0, 0);
		compil_testper1(i, 0);
		compil_testper1_1(i, 0);
		compil_testper2_0(0, 0);
		compil_testper2_1(0, 0);
		compil_testper2_2(0, 0);
		compil_testper2_3(0, 0);
		compil_testper2_4(0, 0);
		printf("----------------------------------------------------------\n");
		compil_testper3_0(0, 0);
		compil_testper3_1(0, 0);
		compil_testper3_2(0, 0);
		compil_testper3_3(0, 0);
		compil_testper3_4(0, 0);
		compil_testper3_5(0, 0);
		printf("----------------------------------------------------------\n");
		compil_testper4_0(0, 0);
		compil_testper4_1(0, 0);
		compil_testper4_2(0, 0);
		compil_testper4_3(0, 0);
		compil_testper4_4(0, 0);
		compil_testper4_5(0, 0);
		compil_testper4_6(0, 0);
		printf("----------------------------------------------------------\n");
		compil_testper5_0(0, 0);
		compil_testper5_1(0, 0);
		compil_testper5_2(0, 0);
		compil_testper5_3(0, 0);
		compil_testper5_4(0, 0);
		compil_testper5_5(0, 0);
		compil_testper5_6(0, 0);
		i++;
	}
}
