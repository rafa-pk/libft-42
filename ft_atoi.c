int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sinal;

	i = 0;
	nb = 0;
	sinal = 0
	if (str[0] == '-')
		sinal++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
	}
	if (sinal != 1)
		return (-nb);
	return (nb);
}
