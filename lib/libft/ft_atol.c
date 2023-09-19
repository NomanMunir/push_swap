#include "libft.h"

long	ft_atol(const char *str)
{
	long	result;
	int		nagetive;

	result = 0;
	nagetive = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			nagetive = -1;
	}
	while (ft_isdigit(*str))
	{
		if (nagetive && ((result * 10) + *str - '0') < result)
			return (0);
		else if (!nagetive && ((result * 10) + *str - '0') < result)
			return (-1);
		result = result * 10 + (*str++ - '0');
	}
	return (result * nagetive);
}