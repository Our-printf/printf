#include "include/ft_printf.h"

void		compil_test_ls(void *test, int i, int j, int k)
{
	j = printf("\n||%d||\n>>%ls<<\n", i, NULL);
	fflush(stdout);
	k = ft_printf(">>%ls<<", NULL);
	printf("				Diff = %d\n", (j - k - 8));
	fflush(stdout);
}

void		compil_test_ls0_0(void *test, int j, int k)
{
	j = printf(">>%5..m010ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%5..m010ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls0_1(void *test, int j, int k)
{
	j = printf(">>%..10ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%..10ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}
void		compil_test_ls0_2(void *test, int j, int k)
{
	j = printf(">>%5m010ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%5m010ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls0_3(void *test, int j, int k)
{
	j = printf(">>%05m010ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05m010ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls0_4(void *test, int j, int k)
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

void		compil_test_ls0_5(void *test, int j, int k)
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

void		compil_test_ls0_51(void *test, int j, int k)
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


void		compil_test_ls0_52(void *test, int j, int k)
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


void		compil_test_ls0_6(void *test, int j, int k)
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

void		compil_test_ls0_7(void *test, int j, int k)
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

void		compil_test_ls0_8(void *test, int j, int k)
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

void		compil_test_ls0_9(void *test, int j, int k)
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

void		compil_test_ls0_10(void *test, int j, int k)
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

void		compil_test_ls0_11(void *test, int j, int k)
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

void		compil_test_ls0_12(void *test, int j, int k)
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

void		compil_test_ls0_13(void *test, int j, int k)
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

void		compil_test_ls0_14(void *test, int j, int k)
{
	j = printf(">>%s et %ls<<\n", NULL, test);
	fflush(stdout);
	k = ft_printf(">>%s et %ls<<", NULL, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls0_15(void *test, int j, int k)
{
	j = printf("%");
	fflush(stdout);
	printf("\n");
	fflush(stdout);
	k = ft_printf("%");
	printf("				Diff = %d\n", j - k);
	fflush(stdout);
}

void		compil_test_ls2_0(void *test, int j, int k)
{
	j = printf(">>%.0ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.0ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls2_1(void *test, int j, int k)
{
	j = printf(">>%.5ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.5ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls2_2(void *test, int j, int k)
{
	j = printf(">>%.ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls2_3(void *test, int j, int k)
{
	j = printf(">>%.34ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.34ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls2_4(void *test, int j, int k)
{
	j = printf(">>%.010ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.010ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls3_0(void *test, int j, int k)
{
	j = printf(">>%10ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls3_1(void *test, int j, int k)
{
	j = printf(">>%0ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls3_2(void *test, int j, int k)
{
	j = printf(">>%34ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%34ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls3_3(void *test, int j, int k)
{
	j = printf(">>%-10ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-10ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls3_4(void *test, int j, int k)
{
	j = printf(">>%-30ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls3_5(void *test, int j, int k)
{
	j = printf(">>%27ls et %15ls<<\n", test, test);
	fflush(stdout);
	k = ft_printf(">>%27ls et %15ls<<", test, test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_0(void *test, int j, int k)
{
	j = printf(">>%-30.1ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-30.1ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_1(void *test, int j, int k)
{
	j = printf(">>%-1.30ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-1.30ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_2(void *test, int j, int k)
{
	j = printf(">>%1.10ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.10ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}
void		compil_test_ls4_22(void *test, int j, int k)
{
	j = printf(">>%10.1ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%10.1ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_3(void *test, int j, int k)
{
	j = printf(">>%1.30ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%1.30ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_4(void *test, int j, int k)
{
	j = printf(">>%-ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_5(void *test, int j, int k)
{
	j = printf(">>%-.30ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.30ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls4_6(void *test, int j, int k)
{
	j = printf(">>%-.5ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-.5ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_0(void *test, int j, int k)
{
	j = printf(">>%030ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%030ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_1(void *test, int j, int k)
{
	j = printf(">>%.05ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%.05ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_2(void *test, int j, int k)
{
	j = printf(">>%05ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%05ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_3(void *test, int j, int k)
{
	j = printf(">>%0.30ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%0.30ls<<", test);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_4(void *test, int j, int k)
{
	j = printf(">>%-05ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-05ls<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_5(void *test, int j, int k)
{
	j = printf(">>%50ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%50ls<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}

void		compil_test_ls5_6(void *test, int j, int k)
{
	j = printf(">>%-50ls<<\n", test);
	fflush(stdout);
	k = ft_printf(">>%-50ls<<", test);
	fflush(stdout);
	printf("				Diff = %d\n", j - k - 1);
	fflush(stdout);
}


void		test_ls(void)
{
	int i = 1;


	while (i < 2)
	{
//		res.k = res.save_i + 1;
		write (1, "\n", 1);
		compil_test_ls(L"我是一只猫。", i, 0, 0);
		compil_test_ls2_0(L"我是一只猫。", 0, 0);
		compil_test_ls2_1(L"我是一只猫。", 0, 0);
		compil_test_ls2_2(L"我是一只猫。", 0, 0);
		compil_test_ls2_3(L"我是一只猫。", 0, 0);
		compil_test_ls2_4(L"我是一只猫。", 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls3_0(L"我是一只猫。", 0, 0);
		compil_test_ls3_1(L"我是一只猫。", 0, 0);
		compil_test_ls3_2(L"我是一只猫。", 0, 0);
		compil_test_ls3_3(L"我是一只猫。", 0, 0);
		compil_test_ls3_4(L"我是一只猫。", 0, 0);
		compil_test_ls3_5(L"我是一只猫。", 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls4_0(L"我是一只猫。", 0, 0);
		compil_test_ls4_1(L"我是一只猫。", 0, 0);
		compil_test_ls4_2(L"我是一只猫。", 0, 0);
		compil_test_ls4_22(L"我是一只猫。", 0, 0);
		compil_test_ls4_3(L"我是一只猫。", 0, 0);
		compil_test_ls4_4(L"我是一只猫。", 0, 0);
		compil_test_ls4_5(L"我是一只猫。", 0, 0);
		compil_test_ls4_6(L"我是一只猫。", 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls5_0(L"我是一只猫。", 0, 0);
		compil_test_ls5_1(L"我是一只猫。", 0, 0);
		compil_test_ls5_2(L"我是一只猫。", 0, 0);
		compil_test_ls5_3(L"我是一只猫。", 0, 0);
		compil_test_ls5_4(L"我是一只猫。", 0, 0);
		compil_test_ls5_5(L"我是一只猫。", 0, 0);
		compil_test_ls5_6(L"我是一只猫。", 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls0_0(L"我是一只猫。", 0, 0);
		compil_test_ls0_1(L"我是一只猫。", 0, 0);
		compil_test_ls0_2(L"我是一只猫。", 0, 0);
		compil_test_ls0_3(L"我是一只猫。", 0, 0);
		compil_test_ls0_4(L"我是一只猫。", 0, 0);
		compil_test_ls0_5(L"我是一只猫。", 0, 0);
		compil_test_ls0_51(L"我是一只猫。", 0, 0);
		compil_test_ls0_52(L"我是一只猫。", 0, 0);
		compil_test_ls0_6(L"我是一只猫。", 0, 0);
		compil_test_ls0_7(L"我是一只猫。", 0, 0);
		compil_test_ls0_8(L"我是一只猫。", 0, 0);
		compil_test_ls0_9(L"我是一只猫。", 0, 0);
		compil_test_ls0_10(L"我是一只猫。", 0, 0);
		compil_test_ls0_11(L"我是一只猫。", 0, 0);
		compil_test_ls0_12(L"我是一只猫。", 0, 0);
		compil_test_ls0_13(L"我是一只猫。", 0, 0);
		compil_test_ls0_14(L"我是一只猫。", 0, 0);
		compil_test_ls0_15(L"我是一只猫。", 0, 0);
		i++;
	}

	i = 0;
/*
	while (i < 2)
	{
		write (1, "\n", 1);
		compil_test_ls(, i, 0, 0);
		compil_test_ls2_0(, 0, 0);
		compil_test_ls2_1(, 0, 0);
		compil_test_ls2_2(, 0, 0);
		compil_test_ls2_3(, 0, 0);
		compil_test_ls2_4(, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls3_0(, 0, 0);
		compil_test_ls3_1(, 0, 0);
		compil_test_ls3_2(, 0, 0);
		compil_test_ls3_3(, 0, 0);
		compil_test_ls3_4(, 0, 0);
		compil_test_ls3_5(, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls4_0(, 0, 0);
		compil_test_ls4_1(, 0, 0);
		compil_test_ls4_2(, 0, 0);
		compil_test_ls4_22(, 0, 0);
		compil_test_ls4_3(, 0, 0);
		compil_test_ls4_4(, 0, 0);
		compil_test_ls4_5(, 0, 0);
		compil_test_ls4_6(, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls5_0(, 0, 0);
		compil_test_ls5_1(, 0, 0);
		compil_test_ls5_2(, 0, 0);
		compil_test_ls5_3(, 0, 0);
		compil_test_ls5_4(, 0, 0);
		printf("----------------------------------------------------------\n");
		compil_test_ls0_0(, 0, 0);
		compil_test_ls0_1(, 0, 0);
		compil_test_ls0_2(, 0, 0);
		compil_test_ls0_3(, 0, 0);
		compil_test_ls0_4(, 0, 0);
		compil_test_ls0_5(, 0, 0);
		compil_test_ls0_51(, 0, 0);
		compil_test_ls0_52(, 0, 0);
		compil_test_ls0_6(, 0, 0);
		compil_test_ls0_7(, 0, 0);
		compil_test_ls0_8(, 0, 0);
		compil_test_ls0_9(, 0, 0);
		compil_test_ls0_10(, 0, 0);
		compil_test_ls0_11(, 0, 0);
		compil_test_ls0_12(, 0, 0);
		compil_test_ls0_13(, 0, 0);
		compil_test_ls0_14(, 0, 0);
		compil_test_ls0_15(, 0, 0);
		i++;
	}


*/


}
