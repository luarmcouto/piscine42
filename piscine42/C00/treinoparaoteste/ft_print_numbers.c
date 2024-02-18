/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:29:46 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 20:34:53 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;
	
	n = '0';
	while (n <= '9')
	{
		write(1, &n,1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
