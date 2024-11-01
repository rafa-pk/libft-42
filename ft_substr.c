#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlenght;
	char	*substr;

	strlenght = ft_strlen(s);
	if (start >= strlenght)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	if (len > strlenght - start)
		len = strlenght - start;
	ft_strncpy(substr,  s + start, len);
	substr[len] = '\0';
	return (substr);
}
