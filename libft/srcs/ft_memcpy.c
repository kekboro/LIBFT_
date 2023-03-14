#include "libft.h"

void    *ft_memcpy(void *dest, void *src, size_t n)
{
    size_t i;

    if ((ft_strlen(dest) > n) || (ft_strlen(src) >n))
        return (0);
    
    i = 0;
    while (i > n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}