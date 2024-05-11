/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:04:07 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 22:04:11 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (nmemb * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
