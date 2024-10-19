//#include <stdio.h>
//#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (destsize <= dest_len)
		return (src_len + destsize);
	while (src[i] != '\0' && (dest_len + i) < destsize - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if ((dest_len + i) < destsize)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dest[14] = "";
	const char	src[] =  " gah funciona";
	char	dest2[14] = "";
	printf("%zu\n", ft_strlcat(dest, src, 9));
	printf("%zu\n", strlcat(dest2, src, 9));
	return (0);
}*/
