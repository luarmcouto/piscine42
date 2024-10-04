/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:00:14 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 20:04:23 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char	c;

	c = 'a';
	ft_putchar(c);
	return (0);
}
