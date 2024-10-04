/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:58:48 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/27 04:27:26 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	c;

	c = n;
	if (c < 0)
	{
		ft_putchar('-');
		c *= -1;
	}

	if (c >= 10)
		ft_putnbr(c / 10);
	ft_putchar(c % 10 + 48);
	
}
/*
int	main()
{
	ft_putnbr(-2147483648);
	return (0);
}*/
