#include "libft.h"

void	itotoa(long val, char *str, int *i)
{
	if (val >= 10)
		itotoa(val/10, str, i);
	str[(*i)++] = val % 10 + 48;
}

char	*ft_itoa(int nbr)
{
	int		i;
	long	val;
	char	*str;

	val = (long)nbr;
	i = 0;
	if (!(str = (char *)malloc(36)))
		return (NULL);
	if (val < 0)
	{
		str[i++] = '-';
		val = -val;
	}
	itotoa(val, str, &i);
	str[i] = '\0';
	return (str);
}
