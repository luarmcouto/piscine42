/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:29:03 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/29 14:49:05 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char n)
{
	write(1, &n, 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (number % 3 == 0)
			write(1, "fizz\n", 5);
		else if (number % 5 == 0)
			write(1, "buzz\n", 6);
		else
		{	putchar(number / 10 + 48);
			putchar(number % 10 + 48);
			putchar('\n');
		}
		number++;
	}
	return (0);
}
