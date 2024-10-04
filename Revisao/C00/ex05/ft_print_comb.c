/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:24:17 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/27 00:50:06 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
        char    cent = '0';
        char    dez = '0';
        char    uni = '0';

        while (cent <= '7')
        {
                dez = cent + 1;
                while (dez <= '8')
                {
                        uni = dez + 1;
                        while (uni <= '9')
                        {
                                write(1, &cent, 1);
                                write(1, &dez, 1);
                                write(1, &uni, 1);
                                write(1, ", ", 1);
                                uni++;
                        }
                        dez++;
                        uni = '0';
                }
                cent++;
        }
}

int     main(void)
{
        ft_print_comb();
        return (0);
}
