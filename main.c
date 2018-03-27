#include <stdio.h>
#include <inttypes.h>
#include <locale.h>
#include <wchar.h>
#include "printf/include/ft_printf.h"
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>

int main()
{
	int		a = 123;
//	char	*s;
//	char *str ="zxc% 6dazerty\n"; //BUG
	char *str ="zxc % 010d azerty\n";// BUGGG
//	char *str = "qwerty %d 123\n";
//	s = "-123";
//	float b = 5.3;
//	ft_putstr("ft printf = ");
//	ft_putstr("\n>");
	ft_printf(str, a);
//	printf("\n%10.3d",a);
//i = printf("lol %.10s\n",s);
//	i = 0;
	printf(str, a);
	fflush(stdout);

//	ft_printf(str,a);
//	fflush(stdout);
//i = printf("%5d",a);
//	printf("\nprintf len = %d\n",i);
	//printf(" i = %d",i);*/
	return (0);
}
