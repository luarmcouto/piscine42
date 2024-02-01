/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 02:04:25 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 02:04:37 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			i++;
		}
		else 
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char	*strg = "";
	printf("%d\n", ft_str_is_printable(strg));
}*/
