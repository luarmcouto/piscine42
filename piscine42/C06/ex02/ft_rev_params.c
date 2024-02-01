/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:35:17 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/25 22:13:15 by luarodri         ###   ########.fr       */
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
		i = argc -1;
		while (i != 0)
		{
			print_param(argv[i]);
			i--;
		}
	}
	return (0);
}
