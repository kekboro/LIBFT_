#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
<<<<<<< HEAD
	size_t c;
	size_t d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
=======
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > maxlen)
	{
		dstlen = maxlen;
	}
	if (dstlen == maxlen || maxlen == 0)
	{
		return (dstlen + srclen);
	}
	if (srclen < maxlen - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - dstlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
>>>>>>> 050138c5d5a2faf755446e590a7ba1f12dea09ff
}