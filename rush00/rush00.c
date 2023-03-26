/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:21:03 by yhakan            #+#    #+#             */
/*   Updated: 2023/03/26 02:21:06 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			write(1, "o", 1);
		}
		else
		{
			write(1, "-", 1);
		}
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
		write(1, "|", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
