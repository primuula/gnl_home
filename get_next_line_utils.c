int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			y;
	char		*news;

	i = 0;
	y = 0;
	news = malloc(sizeof (char) * (my_strlen(s1) + my_strlen(s2) + 1));
	if (!news)
		return (NULL);
	while (s1[i] != '\0')
	{
	news[i] = s1[i];
	i++;
	}
	while (s2[y] != '\0')
	{
	news[i] = s2[y];
	y++;
	i++;
	}
	news[i] = '\0';
	return (news);
}