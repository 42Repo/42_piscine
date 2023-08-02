NAME = libft.a
COMP = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c

HEADER = includes/

OBJ = $(SRC:.c=.o)

all : $(NAME) 

%.o : %.c
	$(COMP) -I$(HEADER) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ) 

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re

