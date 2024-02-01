/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aatoi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:36:54 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/27 05:43:20 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number *10 + *str - 48;
		str++;
	}
	return (number * sign);
}

int	main(int ac, char **av)
{
	int	val;

	if (ac == 2)
	{	
		val = ft_atoi(av[1]);
		printf("%d", val);
	}
	return (0);
}
