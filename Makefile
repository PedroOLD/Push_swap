CC = cc 

FLAGS = -Wall -Werror -Wextra 

NAME = push_swap.a

SRCS =	./utils/ft_putchar.c \
		./utils/ft_putstr.c \
		./utils/ft_strlen.c \
		./utils/ft_substr.c \
		./utils/ft_split.c \

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