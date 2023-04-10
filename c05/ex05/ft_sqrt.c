/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:27:39 by yhakan            #+#    #+#             */
/*   Updated: 2023/04/09 20:27:47 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	a;

	a = nb;
	if (a <= 0)
	{
		return (0);
	}
	if (a == 1)
	{
		return (1);
	}
	index = 2;
	if (a >= 2)
	{
		while (index * index <= a)
		{
			if (index * index == a)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
