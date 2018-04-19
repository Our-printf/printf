/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:29:24 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/20 01:01:25 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "locale.h"

int main()
{
	//	char c[4];
	//	unsigned char d[4];

	//	c[0] = 0xe1;
	//	c[1] = 0x88;
	//	c[2] = 0xb4;
	//	c[3] = 0x0a;
	//	write(1, &c, 3);
	//	write(1, "\n", 1);

	//	d[0] = 225;
	//	d[1] = 136;
	//	d[2] = 180;
	//	d[3] = 10;
	//	write(1, &d, 3);
	//	write(1, "\n", 1);
	/*
	   setlocale(LC_ALL, "");
	   int i = 0;
	   unsigned char str[] = "我是一只猫。";
	   while (str[i])
	   {
	   printf("str[%d] = %d\n", i, str[i]);
	   i++;
	   }






*/
//	setlocale(LC_ALL, "");





//	ft_printf("\n");
//	ft_printf("%%\n");
//	ft_printf("%d\n", 42);
	ft_printf("%d%d\n", 42, 41);
	ft_printf("%d%d%d\n", 42, 43, 44);
	ft_printf("%ld\n", 2147483647);
	ft_printf("%lld\n", 9223372036854775807);
	ft_printf("%x\n", 505);
	ft_printf("%X\n", 505);
	ft_printf("%p\n", &ft_printf);
	ft_printf("%20.15d\n", 54321);
	ft_printf("%-10d\n", 3);
	ft_printf("% d\n", 3);
	ft_printf("%+d\n", 3);
	ft_printf("%010d\n", 1);
	ft_printf("%hhd\n", 0);
	ft_printf("%jd\n", 9223372036854775807);
	ft_printf("%zd\n", 4294967295);
	ft_printf("%\n");
	ft_printf("%U\n", 4294967295);
	ft_printf("%u\n", 4294967295);
	ft_printf("%o\n", 40);
	ft_printf("%%#08x\n", 42);
	ft_printf("%x\n", 1000);
	ft_printf("%#X\n", 1000);
	ft_printf("%s\n", NULL);
	ft_printf("%S\n", L"ݗݜशব");
	ft_printf("%s%s\n", "test", "test");
	ft_printf("%s%s%s\n", "test", "test", "test");
	ft_printf("%C\n", 15000);











	//	printf("1>>%lc<<\n", 0x11ffff);
	//	ft_printf("2>>%lc<<\n", 0x11ffff);
	/*	printf("1>>%lc<<\n", 0x11ffff);
		ft_printf("2>>%lc<<\n", 0x11ffff);
		printf("1>>%lc<<\n", 256);
		ft_printf("2>>%lc<<\n", 256);
		printf("1>>%lc<<\n", 0xdfff);
		ft_printf("2>>%lc<<\n", 0xdfff);
		printf("1>>%lc<<\n", 254);
		ft_printf("2>>%lc<<\n", 254);
		*/
	//	ft_printf(">>%-30ls<<\n", L"我是一只猫。");
	//	printf(">>%-30ls<<\n", L"我是一只猫。");
	//	ft_printf(">>%-30ls<<\n", "Á±≥");
	//	printf(">>%-30ls<<\n", L"Á±≥");
	//	printf("%S%S%S%S%S\n",
	//	L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	//	ft_printf("%S%S%S%S%S\n",
	//	L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	//	printf("%S\n", L"Ξ ξ");
	//	ft_printf("%S\n", L"Ξ ξ");
	//	ft_printf("|21%.s|\n", (char *)42);
	//	printf("|12%.s|\n", (char *)42);




	//	ft_printf("%.s\n", (char *)42);
	//	printf("%.s\n", (char *)42);
	//	printf("%d\n", 0);
	//	ft_printf("%d\n", 0);

	//	ft_printf("%lc\n",NULL);
	//	printf("%lc\n", NULL);



	//	ft_printf("|%4.s|\n", "42");
	//	printf("|%4.s|\n", "42");
	//	ft_printf("|%-4.s|\n", "42");
	//	printf("|%-4.s|\n", "42");
	/*	ft_printf("|%50ls|\n", L"我是一只猫。");
		ft_printf("|%49ls|\n", L"我是一只猫。");
		ft_printf("|%48ls|\n", L"我是一只猫。");
		ft_printf("|%47ls|\n", L"我是一只猫。");
		ft_printf("|%46ls|\n", L"我是一只猫。");
		ft_printf("|%45ls|\n", L"我是一只猫只猫。");
		ft_printf("|%44ls|\n", L"我是一只猫。");
		ft_printf("|%43ls|\n", L"我是一只猫。");
		ft_printf("|%42ls|\n", L"我是一只猫。");
		ft_printf("|%41ls|\n", L"我是一只猫。");
		ft_printf("|%40ls|\n", L"我是一只猫。");
		ft_printf("|%39ls|\n", L"我是一只猫。");
		ft_printf("|%38ls|\n", L"我是一只猫。");
		ft_printf("|%37ls|\n", L"我是一只猫。");
		ft_printf("|%36ls|\n", L"我是一只猫。");
		ft_printf("|%35ls|\n", L"我是一只猫。");
		ft_printf("|%34ls|\n", L"我是一只猫。");
		ft_printf("|%33ls|\n", L"我是一只猫。");
		ft_printf("|%32ls|\n", L"我是一只猫。");
		ft_printf("|%31ls|\n", L"我是一只猫。");
		ft_printf("|%30ls|\n", L"我是一只猫。");
		ft_printf("|%-29ls|\n", L"我是一只猫。");
		ft_printf("|%28ls|\n", L"我是一只猫。");
		ft_printf("|%27ls|\n", L"我是一只猫。");
		ft_printf("|%26ls|\n", L"我是一只猫。");
		ft_printf("|%25ls|\n", L"我是一只猫。");
		*/
	//	int d = 123;
	//	char *s = "123";
	//	test_s();
	//	ft_printf("%.s\n", (char *)42);
	//	test_d();
	//	test_lc();
	//	test_ls();
	//	test_s();
	//	test_c();


	//	test_per();

	//	printf("%d", ft_printf("%s", "abc"));
	/*
	   wchar_t f = 128;

	//	printf("%c\n", 128);
	//	printf("%lc\n", f);
	//	printf("%c\n", L'臦');
	printf("%lc\n", L'ሴ');
	printf("%010lc\n", L'ሴ');
	printf("%10lc\n", L'ሴ');
	printf("%02lc\n", L'ሴ');
	printf("%2lc\n", L'ሴ');
	ft_printf("%.s\n", (char *)42);
	printf("%0.010lc\n", L'ሴ');
	printf("%0.10lc\n", L'ሴ');
	printf("%-1.010lc\n", L'ሴ');
	printf("%-1.10lc\n", L'ሴ');
	printf("%-10.010lc\n", L'ሴ');
	printf("%-10.10lc\n", L'ሴ');
	printf("%-10lc\n", L'ሴ');
	printf("%-010lc\n", L'ሴ');
	printf("%.10lc\n", L'ሴ');
	printf("%-.10lc\n", L'ሴ');
	printf("%-.1lc\n", L'ሴ');
	*///	printf("len = %d\n", printf("%C", L'ሴ'));
	//	printf("%010lc\n", L'ሴ');
	//	ft_printf("%010lc\n", L'ሴ');
	//	printf(">>%10lc<<\n", L'ሴ');
	//	ft_printf(">>%10lc<<\n", L'ሴ');
	//	ft_printf("%lc\n", L'ሴ');
	/*	printf("%llc\n", L'臦');
		write(1, "\n", 1);
		printf("%C\n", L'臦');
		printf("%lC\n", L'臦');
		printf("%llC\n", L'臦');
		printf("%d\n", 123);
		printf("%2d\n", 123);
		printf("%4d\n", 123);
		printf("%.4d\n", 123);
		printf("%.04d\n", 123);
		printf("%+0.04d\n", 123);
		printf("%+d\n", 123);
		printf("%+ d\n", 123);
		printf("% d\n", 123);
		printf("%+4d\n", 123);
		printf("%+.04d\n", 123);
		printf("%0.4d\n", 123);
		printf("%.2d\n", 123);
		printf("%-0.04d\n", 123);
		printf("%-d\n", 123);
		printf("%- d\n", 123);
		printf("%-4d\n", 123);
		printf("%-.04d\n", 123);
		printf("%-4 d\n\n", 123);

		printf("4567 |%-10]5d| plip\n", 12);
		printf("4567 |%10]5d| plip\n", 12);
		printf("|%10.5d|\n", -12);
		printf("|%10d|\n", -12);
		printf("|%010d|\n", -12); 
		printf("|%-10.5d|\n", -12);
		printf("|%-010.5d|\n", -12);
		*/
	//	printf("%10s", NULL);
	//	ft_printf("lol %C lol",s);
	return (0);
}
