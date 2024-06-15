/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:08:54 by minfinga          #+#    #+#             */
/*   Updated: 2024/06/14 11:54:50 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	output_OG;
	int	output_FT;

	/* NO SPECIFIERS */

	ft_printf("----- NO SPECIFIERS ----- \n");
	output_OG = printf("OG -> Test String\t/|1234567890|\\ \t ABCDE\bfghiJKLMnopqrsTUVwxyz\n");
	output_FT = ft_printf("FT -> Test String\t/|1234567890|\\ \t ABCDE\bfghiJKLMnopqrsTUVwxyz\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> TI \t to \n");
	output_FT = ft_printf("FT -> TI \t to \n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");

	/* SPECIFIER %c (Single Character)*/

	ft_printf("----- SPECIFIER %%c (Single Character)----- \n");

	char letter = 'C';
	output_OG = printf("OG -> %c\n", letter);
	output_FT = ft_printf("FT -> %c\n", letter);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	letter = '\0';
	output_OG = printf("OG -> %c\n", letter);
	output_FT = ft_printf("FT -> %c\n", letter);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c\n", '0' + 256);
	output_FT = ft_printf("FT -> %c\n", '0' + 256);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c\n", '0', '1', '2');
	output_FT = ft_printf("FT -> %c %c %c\n", '0', '1', '2');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c\n", '1', '2', 0);
	output_FT = ft_printf("FT -> %c %c %c\n", '1', '2', 0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c\n", '1', ' ', '1');
	output_FT = ft_printf("FT -> %c %c %c\n", '1', ' ', '1');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c\n", '0', '\0', '1');
	output_FT = printf("FT -> %c %c %c\n", '0', '\0', '1');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	/* SPECIFIER %s (Print a String)*/

	ft_printf("----- SPECIFIER %%s (String)----- \n");

	char	*str = "Tito";
	output_OG = printf("OG -> Hello, my name is %s\n", str);
	output_FT = ft_printf("FT -> Hello, my name is %s\n", str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	str = "LONGSTRING LONGSTRING LONGSTRING LONGSTRING LONGSTRING LONGSTRING LONGSTRING LONGSTRING \n";
	output_OG = printf("OG -> %s\n", str);
	output_FT = ft_printf("FT -> %s\n", str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	

	ft_printf("\n");
	
	str = "Cruzeiro Cabuloso,./?! + - =\n";
	output_OG = printf("OG -> %s\n", str);
	output_FT = ft_printf("FT -> %s\n", str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %s\n", "str");
	output_FT = ft_printf("FT -> %s\n", "str");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %s %s%s\n", "4", "-", "2");
	output_FT = ft_printf("FT -> %s %s%s\n", "4", "-", "2");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	char *nulo = NULL;
	output_OG = printf("OG -> This should be NULL: %s\n", nulo);
	output_FT = ft_printf("FT -> This should be NULL: %s\n", nulo);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");
	
	/* SPECIFIER %p (void * pointer printed in hexadecimal)*/

	ft_printf("----- SPECIFIER %%p (String)----- \n");
	
	char	*ptr = "c";
	output_OG = printf("OG -> %p\n", ptr);
	output_FT = ft_printf("FT -> %p\n", ptr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");

	void	*nulo_ptr = NULL;
	output_OG = printf("OG -> %p\n", nulo_ptr);
	output_FT = ft_printf("FT -> %p\n", nulo_ptr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %p\n", (void *) - 1);
	output_FT = ft_printf("FT -> %p\n", (void *) - 1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	ft_printf("\n");

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 1);
	output_FT = ft_printf("FT -> %p\n", (void *) 1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 2);
	output_FT = ft_printf("FT -> %p\n", (void *) 2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 10);
	output_FT = ft_printf("FT -> %p\n", (void *) 10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 11);
	output_FT = ft_printf("FT -> %p\n", (void *) 11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 16);
	output_FT = ft_printf("FT -> %p\n", (void *) 16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 26);
	output_FT = ft_printf("FT -> %p\n", (void *) 26);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 31);
	output_FT = ft_printf("FT -> %p\n", (void *) 31);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *) 32);
	output_FT = ft_printf("FT -> %p\n", (void *) 32);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("LONG_MIN && LONG_MAX------------------------\n");
	output_OG = printf("OG -> %p %p\n", (void *) LONG_MIN, (void *) LONG_MAX);
	output_FT = ft_printf("FT -> %p %p\n", (void *) LONG_MIN, (void *) LONG_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("INT_MIN && INT_MAX------------------------\n");
	output_OG = printf("OG -> %p %p\n", (void *) INT_MIN, (void *) INT_MAX);
	output_FT = ft_printf("FT -> %p %p\n", (void *) INT_MIN, (void *) INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("ULONG_MAX && -ULONG_MAX------------------------\n");
	output_OG = printf("OG -> %p %p\n", (void *) ULONG_MAX, (void *) -ULONG_MAX);
	output_FT = ft_printf("FT -> %p %p\n", (void *) ULONG_MAX, (void *) -ULONG_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("0 && 0--------------------\n");
	output_OG = printf("OG -> %p %p\n", (void*)0, (void *)0);
	output_FT = ft_printf("FT -> %p %p\n", (void*)0, (void *)0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	/* SPECIFIER %d (Decimal Numbers)*/

	ft_printf("----- SPECIFIER %%d (Decimal Numbers)----- \n");
	
	int	nbr_pos = 42;
	
	ft_printf("Positive Numbers\n");
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("INT MAX\n");
	nbr_pos = INT_MAX;
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("Negative Numbers\n");
	nbr_pos = -42;
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("Long Numbers\n");
	nbr_pos = -50000454;
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("INT MIN\n");
	nbr_pos = INT_MIN;
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	/* SPECIFIER %i (An int in base 10)*/

	ft_printf("----- SPECIFIER %%d (Decimal Numbers)----- \n");
	
	int	nbr_int = 42;
	
	ft_printf("Positive Numbers\n");
	output_OG = printf("OG -> %d\n", nbr_int);
	output_FT = ft_printf("FT -> %d\n", nbr_int);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	/* SPECIFIER %u (Print an unsigned decimal in base 10)*/

	ft_printf("----- SPECIFIER %%u (Unsigned Decimal Numbers)----- \n");
	
	int	nbr_u = 42;
	
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");
	
	output_OG = printf("OG -> %u\n", 4294967295u);
	output_FT = ft_printf("FT -> %u\n", 4294967295u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = -5;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	nbr_u = -10;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %u\n", INT_MAX);
	output_FT = ft_printf("FT -> %u\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %u\n", INT_MIN);
	output_FT = ft_printf("FT -> %u\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");

/* SPECIFIER %x (Print a number in hexadecimal lowercase format)*/

	ft_printf("----- SPECIFIER %%x (Hexadecimal Lowercase Numbers)----- \n");
	unsigned	nbr_x = 520;
	output_OG = printf("OG -> %x\n", nbr_x);
	output_FT = ft_printf("FT -> %x\n", nbr_x);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 999999);
	output_FT = ft_printf("FT -> %x\n", 999999);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 4294967293u);
	output_FT = ft_printf("FT -> %x\n", 4294967293u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -100);
	output_FT = ft_printf("FT -> %x\n", -100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", INT_MAX);
	output_FT = ft_printf("FT -> %x\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", INT_MIN);
	output_FT = ft_printf("FT -> %x\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", UINT_MAX);
	output_FT = ft_printf("FT -> %x\n", UINT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	/* SPECIFIER %X (Print a number in hexadecimal uppercase format)*/

	ft_printf("----- SPECIFIER %%x (Hexadecimal Uppercase Numbers)----- \n");
	nbr_x = 520;
	output_OG = printf("OG -> %X\n", nbr_x);
	output_FT = ft_printf("FT -> %X\n", nbr_x);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);
	
	ft_printf("\n");

	output_OG = printf("OG -> %X\n", 999999);
	output_FT = ft_printf("FT -> %X\n", 999999);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %X\n", 4294967293u);
	output_FT = ft_printf("FT -> %X\n", 4294967293u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %X\n", -100);
	output_FT = ft_printf("FT -> %X\n", -100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %X\n", INT_MAX);
	output_FT = ft_printf("FT -> %X\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %X\n", INT_MIN);
	output_FT = ft_printf("FT -> %X\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %X\n", UINT_MAX);
	output_FT = ft_printf("FT -> %X\n", UINT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	/* SPECIFIER %% (Print percent sign)*/

	ft_printf("------------%%%%------------\n");
	output_OG = printf("OG -> %%\n");
	output_FT = ft_printf("FT -> %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %% %%\n");
	output_FT = ft_printf("FT -> %% %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %% %% %%\n");
	output_FT = ft_printf("FT -> %% %% %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %%  %%  %%\n");
	output_FT = ft_printf("FT -> %%  %%  %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("--------------------------------MIX-------------------------------\n");
	output_OG = printf("OG -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	output_FT = ft_printf("FT -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	return (0);

}