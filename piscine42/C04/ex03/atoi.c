/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:56:56 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/27 23:14:36 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;

	while (*str == 32 || *str >= 9 && *str <= 13)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}

int	main(int numerin, char **argzin)
{
	if (numerin == 2)
	{
		printf("%d", ft_atoi(argzin[1]));
	}
}
