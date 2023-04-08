/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:44:28 by yhakan            #+#    #+#             */
/*   Updated: 2023/04/09 01:44:35 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int i;
	int nb;
	int say;

	i = 0;
	say = 0;
	nb = 0;

	while((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;

	while(str[i] == 43 || str[i] == 45)
	{
		if( str[i] == '-')
		{
			say++;
		}
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		nb = nb + str[i] - 48;
		if(str[i + 1] >= 48 && str[i + 1] <= 57)
		{
			nb *= 10;
		}
		i++;
	}
	if(say % 2 == 1)
		nb = -nb;

	return(nb);
}
