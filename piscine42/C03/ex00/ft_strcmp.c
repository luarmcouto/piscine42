/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:06:19 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/20 22:50:32 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		++i;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}*/
