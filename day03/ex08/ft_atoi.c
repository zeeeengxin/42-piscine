#include <stdlib>

int ft_atoi(char *str)
{
	unsigned long nb;
	int flag;

	nb = 0;
	flag = 1;
	if (str == NULL)
		return 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		flag = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		if (flag == -1 && nb > 9223372036854775807)
			return 0;
		else if (nb > 9223372036854775807)
			return -1;
		str++;
	}
	return (nb * flag);
}