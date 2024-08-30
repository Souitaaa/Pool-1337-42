/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:21:31 by csouita           #+#    #+#             */
/*   Updated: 2023/09/07 14:48:18 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = (size - 1);
	while (i < j)
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i++;
		j--;
	}
}
