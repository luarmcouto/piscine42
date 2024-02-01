/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:42:01 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 05:42:04 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else 
		{
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	stri[] = "AAAaaaaAAAAaaaKKKkkKKKKcccccc";
	
	printf("string antiga: %s \n", stri);
	ft_strlowcase(stri);
	printf("string nova: %s \n", stri);
}*/
