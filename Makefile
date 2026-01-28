CC = cc 

FLAGS = -Wall -Werror -Wextra 

NAME = push_swap.a

SRCS =	push_swap_utils.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re