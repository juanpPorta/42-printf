# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jporta <jporta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 15:38:27 by jporta            #+#    #+#              #
#    Updated: 2021/11/03 19:02:27 by jporta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libftprintf.a
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
RM		= /bin/rm -f
LIBFT	= ./libft/libft.a
HEADER	= libftprintf.h
SRCS	= printf.c \
			printf_utils.c 
OBJS	= $(SRCS:.c=.o)

all:	$(NAME)


$(NAME):	$(OBJS)
	@make all -C ./libft
	cp ./libft/libft.a $(NAME)
	$(LIB1) $(NAME) $(OBJS)
			
.c.o:
			$(CC)  -I $(HEADER) -c $< -o $(<:.c=.o)
			
clean:		
	rm -rf $(OBJS)
	@make clean -C ./libft
	
fclean:		clean
			rm -rf $(NAME) a.out
			@make fclean -C ./libft

re:			fclean all


.PHONY:		all clean fclean re bonus rebonus