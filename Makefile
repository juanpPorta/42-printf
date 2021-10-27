# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jporta <jporta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 15:38:27 by jporta            #+#    #+#              #
#    Updated: 2021/10/27 16:38:22 by jporta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libftprintf.a
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f
LIBFT	= ./libft/libft.a
HEADER	= printf.h
SRCS	= printf.c \
			printf_utils.c 
OBJS	= $(SRCS:.c=.o)

all:	make_libft $(NAME)

make_libft:
	@make all -C ./libft

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
			
%.o: %.c $(HEADER) $(LIBFT) 
	$(CC) $(CFLAGS) $< -c
			
clean:		
	rm -rf $(OBJS)
	@make clean -C ./libft
	
fclean:		clean
			rm -rf $(NAME)
			@make fclean -C ./libft

re:			fclean all


.PHONY:		all clean fclean re bonus rebonus