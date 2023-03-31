/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 04:57:36 by yhakan            #+#    #+#             */
/*   Updated: 2023/03/28 05:10:24 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	sw;

	i = 0;
	while (i < (size / 2))
	{
		sw = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - i - 1] = sw;
		i++;
	}
}
