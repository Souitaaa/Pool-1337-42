/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:23:25 by csouita           #+#    #+#             */
/*   Updated: 2023/09/06 16:23:28 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	arr;
	int	*range;

	i = 0;
	arr = max - min;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * arr);
	if (!arr)
		return (0);
	while (arr > i)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
