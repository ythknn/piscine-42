/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:47:37 by cekara            #+#    #+#             */
/*   Updated: 2023/03/26 01:30:20 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_put_digits(char i, char j)
{
	ft_write(i / 10 + '0');
	ft_write(i % 10 + '0');
	ft_write(' ');
	ft_write(j / 10 + '0');
	ft_write(j % 10 + '0');
	if (i != 98 || j != 99)
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_put_digits(i, j);
			j++;
		}
		i++;
	}
}
