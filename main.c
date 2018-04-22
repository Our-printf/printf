/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:29:24 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/21 23:53:20 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "locale.h"
#include <limits.h>

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
//	test_o();
//	test_p();
//	test_x();
	test_d();
//	ft_printf("%d", 20);
//	printf("%s", "abc");


/*
*/
//	setlocale(LC_ALL, "");





//	ft_printf("\n");
//	ft_printf("%%\n");
//	ft_printf("%d\n", 42);
/*	printf("%d\n", 50);
	fflush(stdout);
	ft_printf("%d%d\n", 44, 88);
	printf("%d %d %d\n", 42, 43, 44);
	fflush(stdout);
	ft_printf("%d %d %d\n", 42, 43, 44);
	printf("%d %d %d %d %d %d\n", 99, 0, 44, 46768, 189777, -792668);
	fflush(stdout);
	ft_printf("%d %d %d %d %d %d\n", 99, 0, 44, 46768, 189777, -792668);
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
	ft_printf("%C\n", 15000);*/
//	ft_printf("% 025d\n", -i45);

//	printf("% 025d\n", -i45);










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
	//	int d = i;
	//	char *s = "i";
	//	ft_printf("%.s\n", (char *)42);


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
		ft_printf("%u",4294967295);
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
*/

/*
	int i;
//	i = 012345;
	i = -12345;
//	i = -2147483648;
//	i = 2147483647;
//	i = -0;
		printf("%d\n", i);
		fflush(stdout);
		ft_printf("%d\n", i);
				printf("\n");
		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("%-d\n", i);
		fflush(stdout);
		ft_printf("%-d\n", i);
				printf("\n");

		printf("%-0d\n", i);
		fflush(stdout);
		ft_printf("%-0d\n", i);
				printf("\n");

		printf("%-1d\n", i);
		fflush(stdout);
		ft_printf("%-1d\n", i);
				printf("\n");

		printf("%-10d\n", i);
		fflush(stdout);
		ft_printf("%-10d\n", i);
				printf("\n");

		printf("%-010d\n", i);
		fflush(stdout);
		ft_printf("%-010d\n", i);
				printf("\n");

		printf("%-.d\n", i);
		fflush(stdout);
		ft_printf("%-.d\n", i);
				printf("\n");

		printf("%-.0d\n", i);
		fflush(stdout);
		ft_printf("%-.0d\n", i);
				printf("\n");

		printf("%-0.0d\n", i);
		fflush(stdout);
		ft_printf("%-0.0d\n", i);
				printf("\n");

		printf("%-+d\n", i);
		fflush(stdout);
		ft_printf("%-+d\n", i);
				printf("\n");

		printf("%+-d\n", i);
		fflush(stdout);
		ft_printf("%+-d\n", i);
				printf("\n");

		printf("%-+10d\n", i);
		fflush(stdout);
		ft_printf("%-+10d\n", i);
				printf("\n");

		printf("%-+010d\n", i);
		fflush(stdout);
		ft_printf("%-+010d\n", i);
				printf("\n");

		printf("%-+1d\n", i);
		fflush(stdout);
		ft_printf("%-+1d\n", i);
				printf("\n");

		printf("%- d\n", i);
		fflush(stdout);
		ft_printf("%- d\n", i);
				printf("\n");

		printf("% -d\n", i);
		fflush(stdout);
		ft_printf("% -d\n", i);
				printf("\n");
		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("%-d\n", i);
		fflush(stdout);
		ft_printf("%-d\n", i);
				printf("\n");

		printf("%-0d\n", i);
		fflush(stdout);
		ft_printf("%-0d\n", i);
				printf("\n");

		printf("%-1d\n", i);
		fflush(stdout);
		ft_printf("%-1d\n", i);
				printf("\n");

		printf("%-10d\n", i);
		fflush(stdout);
		ft_printf("%-10d\n", i);
				printf("\n");

		printf("%-010d\n", i);
		fflush(stdout);
		ft_printf("%-010d\n", i);
				printf("\n");

		printf("%.d\n", i);
		fflush(stdout);
		ft_printf("%.d\n", i);
				printf("\n");

		printf("%.0d\n", i);
		fflush(stdout);
		ft_printf("%.0d\n", i);
				printf("\n");

		printf("%-0.0d\n", i);
		fflush(stdout);
		ft_printf("%-0.0d\n", i);
				printf("\n");

		printf("%-+d\n", i);
		fflush(stdout);
		ft_printf("%-+d\n", i);
				printf("\n");

		printf("%+-d\n", i);
		fflush(stdout);
		ft_printf("%+-d\n", i);
				printf("\n");

		printf("%-+10d\n", i);
		fflush(stdout);
		ft_printf("%-+10d\n", i);
				printf("\n");

		printf("%-+010d\n", i);
		fflush(stdout);
		ft_printf("%-+010d\n", i);
				printf("\n");

		printf("%-+1d\n", i);
		fflush(stdout);
		ft_printf("%-+1d\n", i);
				printf("\n");

		printf("%- d\n", i);
		fflush(stdout);
		ft_printf("%- d\n", i);
				printf("\n");

		printf("% -d\n", i);
		fflush(stdout);
		ft_printf("% -d\n", i);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("%- d\n", i);
		fflush(stdout);
		ft_printf("%- d\n", i);
				printf("\n");

		printf("%- 0d\n", i);
		fflush(stdout);
		ft_printf("%- 0d\n", i);
				printf("\n");

		printf("%- 1d\n", i);
		fflush(stdout);
		ft_printf("%- 1d\n", i);
				printf("\n");

		printf("%- 10d\n", i);
		fflush(stdout);
		ft_printf("%- 10d\n", i);
				printf("\n");

		printf("%- 010d\n", i);
		fflush(stdout);
		ft_printf("%- 010d\n", i);
				printf("\n");

		printf("%- .d\n", i);
		fflush(stdout);
		ft_printf("%- .d\n", i);
				printf("\n");

		printf("%- .0d\n", i);
		fflush(stdout);
		ft_printf("%- .0d\n", i);
				printf("\n");

		printf("%- 0.0d\n", i);
		fflush(stdout);
		ft_printf("%- 0.0d\n", i);
				printf("\n");

		printf("%-+ d\n", i);
		fflush(stdout);
		ft_printf("%-+ d\n", i);
				printf("\n");

		printf("%+- d\n", i);
		fflush(stdout);
		ft_printf("%+- d\n", i);
				printf("\n");

		printf("%-+ 10d\n", i);
		fflush(stdout);
		ft_printf("%-+ 10d\n", i);
				printf("\n");

		printf("%-+ 010d\n", i);
		fflush(stdout);
		ft_printf("%-+ 010d\n", i);
				printf("\n");

		printf("%-+ 1d\n", i);
		fflush(stdout);
		ft_printf("%-+ 1d\n", i);
				printf("\n");

		printf("%- d\n", i);
		fflush(stdout);
		ft_printf("%- d\n", i);
				printf("\n");

		printf("% -d\n", i);
		fflush(stdout);
		ft_printf("% -d\n", i);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("Chap 02\n");//CHAP 02
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);

		printf("% d\n", i);
		fflush(stdout);
		ft_printf("% d\n", i);
				printf("\n");

		printf("% 0d\n", i);
		fflush(stdout);
		ft_printf("% 0d\n", i);
				printf("\n");

		printf("% 1d\n", i);
		fflush(stdout);
		ft_printf("% 1d\n", i);
				printf("\n");

		printf("% 10d\n", i);
		fflush(stdout);
		ft_printf("% 10d\n", i);
				printf("\n");

		printf("% 0d\n", i);
		fflush(stdout);
		ft_printf("% 0d\n", i);
				printf("\n");

		printf("% 5d\n", i);
		fflush(stdout);
		ft_printf("% 5d\n", i);
				printf("\n");

		printf("% d\n", i);
		fflush(stdout);
		ft_printf("% d\n", i);
				printf("\n");

		printf("% 010d\n", i);
		fflush(stdout);
		ft_printf("% 010d\n", i);
				printf("\n");

		printf("% .d\n", i);
		fflush(stdout);
		ft_printf("% .d\n", i);
				printf("\n");

		printf("% .0d\n", i);
		fflush(stdout);
		ft_printf("% .0d\n", i);
				printf("\n");

		printf("% 0.0d\n", i);
		fflush(stdout);
		ft_printf("% 0.0d\n", i);
				printf("\n");

		printf("%-+ d\n", i);
		fflush(stdout);
		ft_printf("%-+ d\n", i);
				printf("\n");

		printf("%+- d\n", i);
		fflush(stdout);
		ft_printf("%+- d\n", i);
				printf("\n");

		printf("%-+ 10d\n", i);
		fflush(stdout);
		ft_printf("%-+ 10d\n", i);
				printf("\n");

		printf("%-+ 010d\n", i);
		fflush(stdout);
		ft_printf("%-+ 010d\n", i);
				printf("\n");

		printf("%-+ 1d\n", i);
		fflush(stdout);
		ft_printf("%-+ 1d\n", i);
				printf("\n");

		printf("%- d\n", i);
		fflush(stdout);
		ft_printf("%- d\n", i);
				printf("\n");

		printf("% -d\n", i);
		fflush(stdout);
		ft_printf("% -d\n", i);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);

		printf("%d\n", i);
		fflush(stdout);
		ft_printf("%d\n", i);
				printf("\n");

		printf("%0d\n", i);
		fflush(stdout);
		ft_printf("%0d\n", i);
				printf("\n");

		printf("%010d\n", i);
		fflush(stdout);
		ft_printf("%010d\n", i);
				printf("\n");

		printf("%10d\n", i);
		fflush(stdout);
		ft_printf("%10d\n", i);
				printf("\n");

		printf("%01d\n", i);
		fflush(stdout);
		ft_printf("%01d\n", i);
				printf("\n");

		printf("%5d\n", i);
		fflush(stdout);
		ft_printf("%5d\n", i);
				printf("\n");

		printf("%d\n", i);
		fflush(stdout);
		ft_printf("%d\n", i);
				printf("\n");

		printf("%010d\n", i);
		fflush(stdout);
		ft_printf("%010d\n", i);
				printf("\n");

		printf("%010.3d\n", i);
		fflush(stdout);
		ft_printf("%010.3d\n", i);
				printf("\n");

		printf("%10.3d\n", i);
		fflush(stdout);
		ft_printf("%10.3d\n", i);
				printf("\n");

		printf("zxc % +010.3d azerty\n", i);
		fflush(stdout);
		ft_printf("zxc % +010.3d azerty\n", i);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);

		printf("%11.11d\n", i);
		fflush(stdout);
		ft_printf("%11.11d\n", i);
				printf("\n");

		printf("%10.8d\n", i);
		fflush(stdout);
		ft_printf("%10.8d\n", i);
				printf("\n");

		printf("%10.0d\n", i);
		fflush(stdout);
		ft_printf("%10.0d\n", i);
				printf("\n");

		printf("% -10.07d\n", i);
		fflush(stdout);
		ft_printf("% -10.07d\n", i);
				printf("\n");

		printf("%-10.07d\n", i);
		fflush(stdout);
		ft_printf("%-10.07d\n", i);
				printf("\n");

		printf("%-10.7d\n", i);
		fflush(stdout);
		ft_printf("%-10.7d\n", i);
				printf("\n");

		printf("%-10.7d\n", i);
		fflush(stdout);
		ft_printf("%-10.7d\n", i);
				printf("\n");


		printf("% -010.01d\n", i);
		fflush(stdout);
		ft_printf("% -010.01d\n", i);
				printf("\n");

		printf("% 10.10d\n", i);
		fflush(stdout);
		ft_printf("% 10.10d\n", i);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("--------------------------------------------\n");

		fflush(stdout);
		printf("%0d\n", i);
		fflush(stdout);
		ft_printf("%0d\n", i);
				printf("\n");

		printf("%0.0d\n", i);
		fflush(stdout);
		ft_printf("%0.0d\n", i);
				printf("\n");

		printf("%-+d\n", i);
		fflush(stdout);
		ft_printf("%-+d\n", i);
				printf("\n");

		printf("%+-d\n", i);
		fflush(stdout);
		ft_printf("%+-d\n", i);
				printf("\n");

		printf("%-+10d\n", i);
		fflush(stdout);
		ft_printf("%-+10d\n", i);
				printf("\n");

		printf("%-+010d\n", i);
		fflush(stdout);
		ft_printf("%-+010d\n", i);
				printf("\n");

		printf("%-+1d\n", i);
		fflush(stdout);
		ft_printf("%-+1d\n", i);
				printf("\n");

		printf("%-d\n", i);
		fflush(stdout);
		ft_printf("%-d\n", i);
				printf("\n");

		printf("--------------------------------------------\n");

		fflush(stdout);
		printf("%.d\n", i);
		fflush(stdout);
		ft_printf("%.d\n", i);
				printf("\n");

		printf("%.0d\n", i);
		fflush(stdout);
		ft_printf("%.0d\n", i);
				printf("\n");

		printf("%.1d\n", i);
		fflush(stdout);
		ft_printf("%.1d\n", i);
				printf("\n");

		printf("%.10d\n", i);
		fflush(stdout);
		ft_printf("%.10d\n", i);
				printf("\n");

		printf("%.010d\n", i);
		fflush(stdout);
		ft_printf("%.010d\n", i);
				printf("\n");

		printf("%.5d\n", i);
		fflush(stdout);
		ft_printf("%.5d\n", i);
				printf("\n");

		printf("%.4d\n", i);
		fflush(stdout);
		ft_printf("%.4d\n", i);
				printf("\n");

		printf("%d\n", i);
		fflush(stdout);
		ft_printf("%d\n", i);
				printf("\n");

		printf("%.010d\n", i);
		fflush(stdout);
		ft_printf("%.010d\n", i);
				printf("\n");

		printf("%.d\n", i);
		fflush(stdout);
		ft_printf("%.d\n", i);
				printf("\n");

		printf("%.0d\n", i);
		fflush(stdout);
		ft_printf("%.0d\n", i);
				printf("\n");

		printf("%.00d\n", i);
		fflush(stdout);
		ft_printf("%.00d\n", i);
				printf("\n");

		printf("%-+.d\n", i);
		fflush(stdout);
		ft_printf("%-+.d\n", i);
				printf("\n");

		printf("%+-.d\n", i);
		fflush(stdout);
		ft_printf("%+-.d\n", i);
				printf("\n");

		printf("%-+.10d\n", i);
		fflush(stdout);
		ft_printf("%-+.10d\n", i);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("Chap 03\n");//CHAP 03
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);

		printf("%.-+010d\n", i);
		fflush(stdout);
		ft_printf("%.-+010d\n", i);
				printf("\n");

		printf("%.-+1d\n", i);
		fflush(stdout);
		ft_printf("%.-+1d\n", i);
				printf("\n");

		printf("%-.d\n", i);
		fflush(stdout);
		ft_printf("%-.d\n", i);
				printf("\n");

		printf("%.-d\n", i);
		fflush(stdout);
		ft_printf("%.-d\n", i);
				printf("\n");

		printf("%-10.10d\n", i);
		fflush(stdout);
		ft_printf("%-10.10d\n", i);
				printf("\n");

		printf("%-10.0d\n", i);
		fflush(stdout);
		ft_printf("%-10.0d\n", i);
				printf("\n");

		printf("%-10.01d\n", i);
		fflush(stdout);
		ft_printf("%-10.01d\n", i);
				printf("\n");

		printf("%-010.01d\n", i);
		fflush(stdout);
		ft_printf("%-010.01d\n", i);
				printf("\n");

		printf("%0.10d\n", i);
		fflush(stdout);
		ft_printf("%0.10d\n", i);
				printf("\n");

		printf("%0.0d\n", i);
		fflush(stdout);
		ft_printf("%0.0d\n", i);
				printf("\n");

		printf("%0.01d\n", i);
		fflush(stdout);
		ft_printf("%0.01d\n", i);
				printf("\n");

		printf("%00.01d\n", i);
		fflush(stdout);
		ft_printf("%00.01d\n", i);
				printf("\n");

		printf("%1.10d\n", i);
		fflush(stdout);
		ft_printf("%1.10d\n", i);
				printf("\n");

		printf("%1.0d\n", i);
		fflush(stdout);
		ft_printf("%1.0d\n", i);
				printf("\n");

		printf("%1.01d\n", i);
		fflush(stdout);
		ft_printf("%1.01d\n", i);
				printf("\n");

		printf("%01.01d\n", i);
		fflush(stdout);
		ft_printf("%01.01d\n", i);
				printf("\n");

		printf("%.3d\n", i);
		fflush(stdout);
		ft_printf("%.3d\n", i);
				printf("\n");

		printf("%.4d\n", i);
		fflush(stdout);
		ft_printf("%.4d\n", i);
				printf("\n");

		printf("%4d\n", i);
		fflush(stdout);
		ft_printf("%4d\n", i);
				printf("\n");

		printf("%5d\n", i);
		fflush(stdout);
		ft_printf("%5d\n", i);
				printf("\n");

		printf("%4.3d\n", i);
		fflush(stdout);
		ft_printf("%4.3d\n", i);
				printf("\n");

		printf("%4.4d\n", i);
		fflush(stdout);
		ft_printf("%4.4d\n", i);
				printf("\n");

		printf("%5.3d\n", i);
		fflush(stdout);
		ft_printf("%5.3d\n", i);
				printf("\n");

		printf("%5.4d\n", i);
		fflush(stdout);
		ft_printf("%5.4d\n", i);
				printf("\n");

		printf("20 : 4567 |%-10]5d| plip\n", 12);
		fflush(stdout);
		ft_printf("20 : 4567 |%-10]5d| plip\n", 12);
				printf("\n");

		printf("4567 |%10]5d| plip\n", 12);
		fflush(stdout);
		ft_printf("4567 |%10]5d| plip\n", 12);
				printf("\n");

		printf("|%10.5d|\n", -12);
		fflush(stdout);
		ft_printf("|%10.5d|\n", -12);
				printf("\n");

		printf("|%10d|\n", -12);
		fflush(stdout);
		ft_printf("|%10d|\n", -12);
				printf("\n");

		printf("|%010d|\n", -12);
		fflush(stdout);
		ft_printf("|%010d|\n", -12);
				printf("\n");

		printf("|%-10.5d|\n", -12);
		fflush(stdout);
		ft_printf("|%-10.5d|\n", -12);
				printf("\n");

		printf("|%-010.5d|\n", -12);
		fflush(stdout);
		ft_printf("|%-010.5d|\n", -12);
				printf("\n");

		printf("%-03.2d\n", 0);
		fflush(stdout);
		ft_printf("%-03.2d\n", 0);
				printf("\n");

		printf("%-3.2d\n", 0);
		fflush(stdout);
		ft_printf("%-3.2d\n", 0);
				printf("\n");

		printf("%03.2d\n", 0);
		fflush(stdout);
		ft_printf("%03.2d\n", 0);
				printf("\n");

		printf("%03.1d\n", 0);
		fflush(stdout);
		ft_printf("%03.1d\n", 0);
				printf("\n");

		printf("%03.2d\n", 1);
		fflush(stdout);
		ft_printf("%03.2d\n", 1);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("Chap 03\n");//CHAP 03
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);
		printf("--------------------------------------------\n");
		fflush(stdout);

		printf("%hd\n", 32768);
		fflush(stdout);
		ft_printf("%hd\n", 32768);
				printf("\n");

		printf("%hhd\n", 128);
		fflush(stdout);
		ft_printf("%hhd\n", 128);
				printf("\n");

		printf("%ld\n", 2147483648);
		fflush(stdout);
		ft_printf("%ld\n", 2147483648);
				printf("\n");

		printf("%lld\n", 9223372036854775807);
		fflush(stdout);
		ft_printf("%lld\n", 9223372036854775807);
				printf("\n");

		printf("%jd\n", 9223372036854775807);
		fflush(stdout);
		ft_printf("%jd\n", 9223372036854775807);
				printf("\n");

		printf("%zd\n", 4294967295);
		fflush(stdout);
		ft_printf("%zd\n", 4294967295);
				printf("\n");

		printf("--------------------------------------------\n");
		fflush(stdout);

		printf("A%lld\n", -9223372036854775808);
		fflush(stdout);
		ft_printf("B%lld\n", -9223372036854775808);
				printf("\n");

		printf("A%jd\n", -9223372036854775808);
		fflush(stdout);
		ft_printf("B%jd\n", -9223372036854775808);
				printf("\n");

		printf("A%D\n", LONG_MAX);
		fflush(stdout);
		ft_printf("B%D\n", LONG_MAX);
				printf("\n");

		printf("A%D\n", LONG_MIN);
		fflush(stdout);
		ft_printf("B%D\n", LONG_MIN);
				printf("\n");









		printf("%X\n", 42);
		fflush(stdout);
		ft_printf("%X\n", 42);
				printf("\n");

	test_d();

		printf("%x\n", -42);
		fflush(stdout);
		ft_printf("%x\n", -42);
				printf("\n");

		printf("%x\n", -2);
		fflush(stdout);
		ft_printf("%x\n", -2);
				printf("\n");

*/


		printf("%jx\n", -4294967296);
		fflush(stdout);
		ft_printf("%jx\n", -4294967296);
				printf("\n");

		printf("%#llx\n", 9223372036854775807);
		fflush(stdout);
		ft_printf("%#llx\n", 9223372036854775807);
				printf("\n");

		printf("%#-08x\n", 42);
		fflush(stdout);
		ft_printf("%#-08x\n", 42);
				printf("\n");

		printf("%#6o\n", 2500);
		fflush(stdout);
		ft_printf("%#6o\n", 2500);
				printf("\n");

		printf("%-#6o\n", 2500);
		fflush(stdout);
		ft_printf("%-#6o\n", 2500);
				printf("\n");

		printf("@moulitest: %#.o %#.0o\n", 0, 0);
		fflush(stdout);
		ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
				printf("\n");

		printf("%llu, %llu\n", 0, ULLONG_MAX);
		fflush(stdout);
		ft_printf("%llu, %llu\n", 0, ULLONG_MAX);
				printf("\n");

		printf("%zu, %zu\n", 0, ULLONG_MAX);
		fflush(stdout);
		ft_printf("%zu, %zu\n", 0, ULLONG_MAX);
				printf("\n");

		printf("{%030X}\n", 0xFFFF);
		fflush(stdout);
		ft_printf("{%030X}\n", 0xFFFF);
				printf("\n");





/*
		printf();
		fflush(stdout);
		ft_printf();
				printf("\n");


*/
		
		
		
		
		
		
		
		
		
		
		
		
		

	//	printf("%10s", NULL);
	//	ft_printf("lol %C lol",s);
	return (0);
}
