/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:29:51 by yhakan            #+#    #+#             */
/*   Updated: 2023/03/26 01:29:53 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	c = 122;
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
