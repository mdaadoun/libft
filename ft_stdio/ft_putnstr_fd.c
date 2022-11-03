void	ft_putnstr_fd(char *str, size_t len, int fd)
{
	write(fd, str, len);
}
