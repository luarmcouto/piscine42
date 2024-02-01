/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:44:41 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/26 22:52:29 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	fd_print_reverse_alphabet();
	return (0);
}*/
