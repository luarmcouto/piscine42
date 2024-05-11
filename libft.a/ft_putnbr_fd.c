/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:00:55 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 23:04:45 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr < 10)
	{
		ft_putchar_fd(nbr + 48, fd);
	}
	else if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}
