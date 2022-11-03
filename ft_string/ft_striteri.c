
/*
 * Apply the f function to each char of the string s (without return)
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
