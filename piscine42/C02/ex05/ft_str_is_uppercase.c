/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 02:00:47 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 19:28:07 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	n = ft_str_is_uppercase(strg);
	printf("%d\n", n);
}*/
