/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:55:16 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 19:26:32 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else 
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	int	n;
	char	*strg;
	
	strg = "";
	n = ft_str_is_lowercase(strg);
	printf("%d\n", n);
}*/
