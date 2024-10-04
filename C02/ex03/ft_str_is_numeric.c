/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:50:12 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/19 20:28:07 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	n = ft_str_is_numeric(strg);
	printf("%d\n", n);
}*/
