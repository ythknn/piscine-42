#include <unistd.h>

void	ifkontrol(int x, int genislik, int y, int yukseklik);
void	elsekontrol(int y, int yukseklik);

void	rush(int genislik, int yukseklik)
{
	int	x;
	int	y;

	x = 1;
	while (x <= genislik)
	{
		y = 1;
		while (y <= yukseklik)
		{
			ifkontrol(x, genislik, y, yukseklik);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void	ifkontrol(int x, int genislik, int y, int yukseklik)
{
	if (x == 1 || x == genislik)
	{
		if (y == 1 || y == yukseklik)
		{
			if (x == genislik)
				write(1, "C", 1);
			else
				write(1, "A", 1);
		}
		else
			write(1, "B", 1);
	}
	else
	{
		elsekontrol(y, yukseklik);
	}
}

void	elsekontrol(int y, int yukseklik)
{
	if (y == 1 || y == yukseklik)
	{
		write(1, "B", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}

int	main()
{
	rush(1,1);
	return 0;
}