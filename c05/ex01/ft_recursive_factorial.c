/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:26:31 by yhakan            #+#    #+#             */
/*   Updated: 2023/04/09 20:26:33 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	sonuc;

	sonuc = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 1)
	{
		sonuc = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (sonuc);
}
