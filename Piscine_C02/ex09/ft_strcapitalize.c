/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:02:06 by csouita           #+#    #+#             */
/*   Updated: 2023/08/23 16:12:49 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && flag)
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 0;
		}
		else if (!(str[i] <= 'Z' && str[i] >= 'A') && !(str[i] >= 'a'
				&& str[i] <= 'z') && !(str[i] <= '9' && str[i] >= '0'))
		{
			flag = 1;
		}
		i++;
	}
	return (str);
}
