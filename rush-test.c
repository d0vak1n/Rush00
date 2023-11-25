void	rush(int cols, int rows)
{
	int	y;
	int	x;

	y = 1;
	x = 1;
	while (y <= rows)
	{
		while (x <= cols)
		{
			if ((y == 1 && x == 1) || (y == rows && x == 1))
				ft_putchar('A');
			else if ((y == 1 && x == cols) || (y == rows && x == cols))
				ft_putchar('C');
			else if (y == 1 || y == rows || x == 1 || x == cols)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		x = 1;
		y++;
	}
}
