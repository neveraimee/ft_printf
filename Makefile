NAME    = libftprintf.a
CC      = cc
#CFLAGS  = -Wall -Wextra -Werror

SRCS    = ft_printf.c \
          ft_printf_c.c \
          ft_printf_str.c \
          ft_printf_dec_int.c \
          ft_printf_u.c \
          ft_printf_hex.c \
          ft_printf_ptr.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re