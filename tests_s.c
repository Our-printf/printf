#include "printf/include/ft_printf.h"


void		test_s(void)
{
	int i = 1;
	char **test;
	write (1, "A", 1);
	*test[1] = '1';
//	test[2] = "les gars";
	write (1, "A", 1);

	while (i < 2)
	{
		compil_test_s(test[i], i, 0);
		i++;
	}
}


void		compil_test_s(char *test, int i, int dif)
{
	printf("\nTEST : %d\n>>%s<<\n", i, test);
//	ft_printf(">>%s<<\n", test);
//	printf("Diff = %d\n", dif = (printf("%s", test) - ft_printf("%s", test)));


}
