#include "libft.h"

char	*ft_strdup(const char *str)
{
	int i;
	char *dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!(dup))
		return (NULL);
	while(str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}