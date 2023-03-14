#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
<<<<<<< HEAD
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
=======
	int i;

	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
>>>>>>> 050138c5d5a2faf755446e590a7ba1f12dea09ff
			i--;
		}
	}
	else
	{
<<<<<<< HEAD
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
=======
		ft_memcpy(dst, src, len);
>>>>>>> 050138c5d5a2faf755446e590a7ba1f12dea09ff
	}
	return (dst);
}