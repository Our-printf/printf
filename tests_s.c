#include "include/ft_printf.h"

void		compil_test_s(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%s<<\n", i, test);
	k = ft_printf(">>%s<<\n", test);
	printf("Diff = %d\n", (j - k - 11));
}

void		compil_test_s2_0(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%.0s<<\n", i, test);
	k = ft_printf(">>%.0s<<\n", test);
	printf("Diff = %d\n", j - k - 11);
}

void		compil_test_s2_1(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%.5s<<\n", i, test);
	k = ft_printf(">>%.5s<<\n", test);
	printf("Diff = %d\n", j - k - 11);
}

void		compil_test_s2_2(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%.s<<\n", i, test);
	k = ft_printf(">>%.s<<\n", test);
	printf("Diff = %d\n", j - k - 11);
}

void		compil_test_s2_3(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%.30s<<\n", i, test);
	k = ft_printf(">>%.30s<<\n", test);
	printf("Diff = %d\n", j - k - 11);
}

void		compil_test_s2_4(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%.010s<<\n", i, test);
	k = ft_printf(">>%.010s<<\n", test);
	printf("Diff = %d\n", j - k - 11);
}

void		compil_test_s2_5(char *test, int i, int j, int k)
{
	j = printf("\n\nTEST : %d\n>>%.m010s<<\n", i, test);
	k = ft_printf(">>%.m010s<<\n", test);
	printf("Diff = %d\n", j - k - 11);
}


void		test_s(void)
{
	int i = 1;
	char *test[100];

	test[1] = "Salut les gars !";
	test[2] = "Salut les gars !\n";
	test[3] = "\nSalut les gars !";
	test[4] = "Salut%s les gars !";
	test[5] = "Salut\t les gars !";
	test[6] = "Salut\0 les gars !";
	test[7] = "Salut\v les gars !";
	test[8] = "Salut\\ les gars !";
	test[9] = "Salut\ les gars !";
	test[10] = "Salut\' les gars !";
	test[11] = "Salut\" les gars !";
	test[12] = "Salut\O077 les gars !";
	test[13] = "Salut\Xacf les gars !";
	test[14] = "";
	test[15] = "S";
	test[16] = "@#$%^&*";
	test[17] = "0123456789";

	while (i < 18)
	{
		printf("---------------------------------------------------------\n");
		compil_test_s(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		compil_test_s2_0(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		compil_test_s2_1(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		compil_test_s2_2(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		compil_test_s2_3(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		compil_test_s2_4(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		compil_test_s2_5(test[i], i, 0, 0);
		printf("---------------------------------------------------------\n");
		printf("000000000000000000000000000000000000000000000000000000000\n");
		i++;
	}
}
