/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:11:01 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 04:11:07 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
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
	ft_strupcase(stri);
	printf("string nova: %s \n", stri);
}*/
