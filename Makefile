# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jporta <jporta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 15:38:27 by jporta            #+#    #+#              #
#    Updated: 2021/11/02 17:40:10 by jporta           ###   ########.fr        #
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

all:	$(NAME)


$(NAME):	$(OBJS)
	@make all -C ./libft
	$(LIB1) $(NAME) $(OBJS) $(LIBFT)
	$(LIB2) $(NAME)
	@chmod 700 libftprintf.a
			
.c.o:
			$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $(<:.c=.o)
			
clean:		
	rm -rf $(OBJS)
	@make clean -C ./libft
	
fclean:		clean
			rm -rf $(NAME) a.out
			@make fclean -C ./libft

re:			fclean all


.PHONY:		all clean fclean re bonus rebonus