/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:53:43 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 14:53:11 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	const char	*psrc;
	char		*pdst;
	size_t		i;

	pdst = dest;
	psrc = src;
	if (!pdst && !psrc)
		return (0);
	i = 0;
	while (i < num)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dest);
}
/*
int	main(void) {
	char src[] = "Hello, world!";
	char dest[50];

	ft_memcpy(dest, src, sizeof(src));

	printf("dest: %s\n", dest);

	return (0);
}*/