#include "libft.h"
long	ft_atol(const char *str)
{
	long	result;
	bool	nagetive;

	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			nagetive = true;
	}
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0');
	if (nagetive)
		result = -result;
	return (result);
}