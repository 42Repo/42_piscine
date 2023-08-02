NAME = rush-02
COMP = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_putnbr.c\
	ft_putstr.c\
	main.c\
	open_file.c\
	ft_create_tab.c\
	struc_file.c\
	ft_split.c\
	ft_recursive_power.c\
	tab_explore.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(COMP) $(CFLAGS) -o $@ -c $< -g

$(NAME) : $(OBJ)
	$(COMP) $(OBJ) -o $(NAME) -g

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re

