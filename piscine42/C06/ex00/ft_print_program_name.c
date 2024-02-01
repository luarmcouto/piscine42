/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:58:33 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/25 22:06:00 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_name(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		put_char(c[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		print_name(av[0]);
		put_char('\n');
	}
	return (0);
}
