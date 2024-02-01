/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:08:40 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/25 22:10:01 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_param(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		put_char(av[i]);
		i++;
	}
	put_char('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			print_param(argv[i]);
			i++;
		}
	}
	return (0);
}
