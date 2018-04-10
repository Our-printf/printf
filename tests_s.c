#include "include/ft_printf.h"

void		compil_test_s(char *test, int i, int j, int k)
{
	j = printf("\n||%d||\n>>%s<<\n", i, NULL);
	fflush(stdout);
	k = ft_printf(">>%s<<", NULL);
	printf("				Diff = %d\n", (j - k - 8));
	fflush(stdout);
}

void		compil_test_s0_0(char *test, int j, int k)
{
	j = printf(">>%5..m010s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%5..m010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s0_1(char *test, int j, int k)
{
	j = printf(">>%..10s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%..10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}
void		compil_test_s0_2(char *test, int j, int k)
{
	j = printf(">>%5m010s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%5m010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s0_3(char *test, int j, int k)
{
	j = printf(">>%05m010s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05m010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s0_4(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_5(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("   %");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("   %");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_51(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("%");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("%");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}


void		compil_test_s0_52(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("%   ");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("%   ");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}


void		compil_test_s0_6(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("", test);
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("", test);
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_7(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%0Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_8(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%   Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%   Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_9(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%+  Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%+  Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_10(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%10 Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%10 Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_11(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%#Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%#Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_12(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%010Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%010Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_13(char *test, int j, int k)
{
	printf(">>");
	fflush(stdout);
	j = printf("Test%.30Test");
	fflush(stdout);
	printf("<<\n>>");
	fflush(stdout);
	k = ft_printf("Test%.30Test");
	printf("<<");
	fflush(stdout);
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s0_14(char *test, int j, int k)
{
	j = printf(">>%s et %s<<\n", NULL, test);
	fflush(stdout);
	k = ft_printf(">>%s et %s<<", NULL, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s0_15(char *test, int j, int k)
{
	j = printf("%");
	fflush(stdout);
	printf("\n");
	fflush(stdout);
	k = ft_printf("%");
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_s2_0(char *test, int j, int k)
{
	j = printf(">>%.0s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s2_1(char *test, int j, int k)
{
	j = printf(">>%.5s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s2_2(char *test, int j, int k)
{
	j = printf(">>%.s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s2_3(char *test, int j, int k)
{
	j = printf(">>%.34s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s2_4(char *test, int j, int k)
{
	j = printf(">>%.010s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s3_0(char *test, int j, int k)
{
	j = printf(">>%10s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s3_1(char *test, int j, int k)
{
	j = printf(">>%0s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s3_2(char *test, int j, int k)
{
	j = printf(">>%34s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s3_3(char *test, int j, int k)
{
	j = printf(">>%-10s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s3_4(char *test, int j, int k)
{
	j = printf(">>%-30s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s3_5(char *test, int j, int k)
{
	j = printf(">>%20s et %15s<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%20s et %15s<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_0(char *test, int j, int k)
{
	j = printf(">>%-30.1s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_1(char *test, int j, int k)
{
	j = printf(">>%-1.30s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_2(char *test, int j, int k)
{
	j = printf(">>%1.10s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.10s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}
void		compil_test_s4_22(char *test, int j, int k)
{
	j = printf(">>%10.1s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10.1s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_3(char *test, int j, int k)
{
	j = printf(">>%1.30s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_4(char *test, int j, int k)
{
	j = printf(">>%-s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_5(char *test, int j, int k)
{
	j = printf(">>%-.30s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s4_6(char *test, int j, int k)
{
	j = printf(">>%-.5s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s5_0(char *test, int j, int k)
{
	j = printf(">>%030s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s5_1(char *test, int j, int k)
{
	j = printf(">>%.05s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s5_2(char *test, int j, int k)
{
	j = printf(">>%05s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s5_3(char *test, int j, int k)
{
	j = printf(">>%0.30s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30s<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_s5_4(char *test, int j, int k)
{
	j = printf(">>%-05s<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05s<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}




void		test_s(void)
{
	int i = 1;
	char *test[100];

	test[1] = "Salut les gars !";
	test[3] = "Salut\0 les gars !";
	test[4] = "S";
	test[5] = "";

	while (i < 6)
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
		compil_test_s3_5(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s4_0(test[i], 0, 0);
		compil_test_s4_1(test[i], 0, 0);
		compil_test_s4_2(test[i], 0, 0);
		compil_test_s4_22(test[i], 0, 0);
		compil_test_s4_3(test[i], 0, 0);
		compil_test_s4_4(test[i], 0, 0);
		compil_test_s4_5(test[i], 0, 0);
		compil_test_s4_6(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s5_0(test[i], 0, 0);
		compil_test_s5_1(test[i], 0, 0);
		compil_test_s5_2(test[i], 0, 0);
		compil_test_s5_3(test[i], 0, 0);
		compil_test_s5_4(test[i], 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_s0_0(test[i], 0, 0);
		compil_test_s0_1(test[i], 0, 0);
		compil_test_s0_2(test[i], 0, 0);
		compil_test_s0_3(test[i], 0, 0);
		compil_test_s0_4(test[i], 0, 0);
		compil_test_s0_5(test[i], 0, 0);
		compil_test_s0_51(test[i], 0, 0);
		compil_test_s0_52(test[i], 0, 0);
		compil_test_s0_6(test[i], 0, 0);
		compil_test_s0_7(test[i], 0, 0);
		compil_test_s0_8(test[i], 0, 0);
		compil_test_s0_9(test[i], 0, 0);
		compil_test_s0_10(test[i], 0, 0);
		compil_test_s0_11(test[i], 0, 0);
		compil_test_s0_12(test[i], 0, 0);
		compil_test_s0_13(test[i], 0, 0);
		compil_test_s0_14(test[i], 0, 0);
		compil_test_s0_15(test[i], 0, 0);
		i++;
	}
}
