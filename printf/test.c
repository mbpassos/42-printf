int	ft_print_chr(int c, t_flags *flags)
{
	int	len;

	len = 0;
	if (flags->only_number)
		len += ft_print_justify_before(flags, 1);
	ft_putchar(c);
	len += 1;
	if (flags->minus)
		len += ft_print_justify_after(flags, 1);
	return (len);
}

int	ft_print_justify_before(t_flags *flags, int n)
{
	int	i;

	i = 0;
	if (flags->only_number)
		flags->only_number = 0;
	while (i < flags->width - n)
		i += ft_print_chr(' ', flags);
	return (i);
}

int	ft_print_justify_after(t_flags *flags, int n)
{
	int	i;

	i = 0;
	if (flags->minus)
		flags->minus = 0;
	while (i < flags->width - n)
		i += ft_print_chr(' ', flags);
	return (i);
}