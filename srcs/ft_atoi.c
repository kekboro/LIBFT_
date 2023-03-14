#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 1;
	nb = 0;
	while(str[i] <= 32 || str[i] == 127)
		i++;
	if ((str[i] == 45 || str[i] == 43) && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return(nb * sign);
}


#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	printf("%d\n", atoi(av[1]));
	printf("%d\n", ft_atoi(av[1]));
	return(0);
}