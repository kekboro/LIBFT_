#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
<<<<<<< HEAD
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
=======
	size_t			i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_str[i] != s2_str[i])
		{
			return (s1_str[i] - s2_str[i]);
		}
		i++;
	}
	return (0);
}
>>>>>>> 050138c5d5a2faf755446e590a7ba1f12dea09ff
