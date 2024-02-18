/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:10:09 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 20:15:01 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return(0);
}
