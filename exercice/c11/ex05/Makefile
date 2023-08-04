NAME = do-op
COMP = clang
CFLAGS = -Wall -Werror -Wextra
SRC = main.c\
	srcs/lib.c\
	srcs/ope.c\

HEADER = includes/

OBJ = $(SRC:.c=.o)

all : $(NAME) 

%.o : %.c
	@$(COMP) -I$(HEADER) $(CFLAGS) -o $@ -c $< -g

$(NAME) : $(OBJ)
	@$(COMP) $(OBJ) -o $(NAME) -g

clean :
	@rm -f $(OBJ) 

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re

