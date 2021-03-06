CC		= gcc
NAME	= libftprintf.a
LIB1	= ar -rcs
LIBFT	= ./libft/libft.a
HEADER	= ft_printf.h
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