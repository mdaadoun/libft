/*
** checks whether c is an ascii char between 0 and 127
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
