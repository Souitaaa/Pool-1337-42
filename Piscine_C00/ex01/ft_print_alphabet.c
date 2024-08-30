/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:35:46 by csouita           #+#    #+#             */
/*   Updated: 2023/08/17 20:41:19 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_alphabet(void)
{
	char	alphabet ;

	alphabet = 'a';
	while (alphabet <= 'z' )
	{
		write(1, &alphabet, 1);
	alphabet++;
	}
}
