#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			i;
	const char	*dest;

	i = 0;
	dest = (const char *)malloc(sizeof(const char) * ft_strlen(src + 1));
	if (!dest)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
