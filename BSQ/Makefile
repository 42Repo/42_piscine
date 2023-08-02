NAME = bsq
COMP = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = main.c\
	srcs/parsing_file_V2.c\
	srcs/print_tab.c\
	srcs/lib.c\
	srcs/lib2.c\
	srcs/get_next_line.c\
	srcs/ft_split.c\
	srcs/free_all.c\
	srcs/int_tab_generator.c\
	srcs/open_file_V2.c
#srcs/get_file.c\


HEADER = includes/

OBJ = $(SRC:.c=.o)

all : $(NAME) 

%.o : %.c
	$(COMP) -I$(HEADER) $(CFLAGS) -o $@ -c $< -g

$(NAME) : $(OBJ)
	$(COMP) $(OBJ) -o $(NAME) -g

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re

