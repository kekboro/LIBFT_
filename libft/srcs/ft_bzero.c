#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < len)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}