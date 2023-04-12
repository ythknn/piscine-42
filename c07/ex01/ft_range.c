/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakan <yhakan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:32:07 by yhakan            #+#    #+#             */
/*   Updated: 2023/04/12 12:37:37 by yhakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (max < min || !(arr))
		return (0);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
