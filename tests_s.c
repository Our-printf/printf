#include "include/ft_printf.h"

void		compil_test_s(char *test, int i, int j, int k)
{
	j = printf("%d\n>>%s<<\n", i, test);
	k = ft_printf(">>%s<<", test);
	printf("				Diff = %d\n", (j - k - 3));
}

void		compil_test_s0_0(char *test, int j, int k)
{
	j = printf(">>%5..m010s<<\n", test);
	k = ft_printf(">>%5..m010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s0_1(char *test, int j, int k)
{
	j = printf(">>%..10s<<\n", test);
	k = ft_printf(">>%..10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}
void		compil_test_s0_2(char *test, int j, int k)
{
	j = printf(">>%5m010s<<\n", test);
	k = ft_printf(">>%5m010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s0_3(char *test, int j, int k)
{
	j = printf(">>%05m010s<<\n", test);
	k = ft_printf(">>%05m010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s2_0(char *test, int j, int k)
{
	j = printf(">>%.0s<<\n", test);
	k = ft_printf(">>%.0s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s2_1(char *test, int j, int k)
{
	j = printf(">>%.5s<<\n", test);
	k = ft_printf(">>%.5s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s2_2(char *test, int j, int k)
{
	j = printf(">>%.s<<\n", test);
	k = ft_printf(">>%.s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s2_3(char *test, int j, int k)
{
	j = printf(">>%.34s<<\n", test);
	k = ft_printf(">>%.34s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s2_4(char *test, int j, int k)
{
	j = printf(">>%.010s<<\n", test);
	k = ft_printf(">>%.010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s3_0(char *test, int j, int k)
{
	j = printf(">>%10s<<\n", test);
	k = ft_printf(">>%10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s3_1(char *test, int j, int k)
{
	j = printf(">>%0s<<\n", test);
	k = ft_printf(">>%0s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s3_2(char *test, int j, int k)
{
	j = printf(">>%34s<<\n", test);
	k = ft_printf(">>%34s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s3_3(char *test, int j, int k)
{
	j = printf(">>%-10s<<\n", test);
	k = ft_printf(">>%-10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s3_4(char *test, int j, int k)
{
	j = printf(">>%-30s<<\n", test);
	k = ft_printf(">>%-30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_0(char *test, int j, int k)
{
	j = printf(">>%-30.1s<<\n", test);
	k = ft_printf(">>%-30.1s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_1(char *test, int j, int k)
{
	j = printf(">>%-1.30s<<\n", test);
	k = ft_printf(">>%-1.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_2(char *test, int j, int k)
{
	j = printf(">>%30.1s<<\n", test);
	k = ft_printf(">>%30.1s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_3(char *test, int j, int k)
{
	j = printf(">>%1.30s<<\n", test);
	k = ft_printf(">>%1.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_4(char *test, int j, int k)
{
	j = printf(">>%-s<<\n", test);
	k = ft_printf(">>%-s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_5(char *test, int j, int k)
{
	j = printf(">>%-.30s<<\n", test);
	k = ft_printf(">>%-.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s4_6(char *test, int j, int k)
{
	j = printf(">>%-.5s<<\n", test);
	k = ft_printf(">>%-.5s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s5_0(char *test, int j, int k)
{
	j = printf(">>%030s<<\n", test);
	k = ft_printf(">>%030s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s5_1(char *test, int j, int k)
{
	j = printf(">>%.05s<<\n", test);
	k = ft_printf(">>%.05s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s5_2(char *test, int j, int k)
{
	j = printf(">>%05s<<\n", test);
	k = ft_printf(">>%05s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}

void		compil_test_s5_3(char *test, int j, int k)
{
	j = printf(">>%0.30s<<\n", test);
	k = ft_printf(">>%0.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
}



void		test_s(void)
{
	int i = 1;
	char *test[100];

	test[1] = "Salut les gars !";
	test[3] = "Salut\0 les gars !";

	while (i < 2)
	{
//		res.k = res.save_i + 1;
		compil_test_s(test[i], i, 0, 0);
		compil_test_s2_0(test[i], 0, 0);
		compil_test_s2_1(test[i], 0, 0);
		compil_test_s2_2(test[i], 0, 0);
		compil_test_s2_3(test[i], 0, 0);
		compil_test_s2_4(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s3_0(test[i], 0, 0);
		compil_test_s3_1(test[i], 0, 0);
		compil_test_s3_2(test[i], 0, 0);
		compil_test_s3_3(test[i], 0, 0);
		compil_test_s3_4(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s4_0(test[i], 0, 0);
		compil_test_s4_1(test[i], 0, 0);
		compil_test_s4_2(test[i], 0, 0);
		compil_test_s4_3(test[i], 0, 0);
		compil_test_s4_4(test[i], 0, 0);
		compil_test_s4_5(test[i], 0, 0);
		compil_test_s4_6(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s5_0(test[i], 0, 0);
		compil_test_s5_1(test[i], 0, 0);
		compil_test_s5_2(test[i], 0, 0);
		compil_test_s5_3(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s0_0(test[i], 0, 0);
		compil_test_s0_1(test[i], 0, 0);
		compil_test_s0_2(test[i], 0, 0);
		compil_test_s0_3(test[i], 0, 0);
		i++;
	}
}
