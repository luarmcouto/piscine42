/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:22:08 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/29 16:01:42 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	atoi(char *str)
{
	int     sign;
	int     result;
		
	sign = 1;
	result = 0;
	while (*str == 32 || *str >= 9 && *str <= 13)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d",atoi(av[1]));
	return (0);
}
