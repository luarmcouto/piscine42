# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 11:58:22 by luamonteiro       #+#    #+#              #
#    Updated: 2024/06/09 16:33:59 by luamonteiro      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c ft_putchr.c ft_putnb.c ft_putnbrunsig.c ft_putstri.c ft_puthex.c ft_putptr.c
OBJS = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFTDIR = /Users/luamonteiro/Desktop/42/git42/libft.a
LIBFTNAME = libft.a
LIBC = ar -rcs
NAME = libftprintf.a

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	@$(RM) $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all

.PHONY: all clean fclean re