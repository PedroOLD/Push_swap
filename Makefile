CC = cc 

FLAGS = -Wall -Werror -Wextra

NAME = push_swap

SRCS =	./utils/ft_putchar.c \
		./utils/ft_putstr.c \
		./utils/ft_strlen.c \
		./utils/ft_substr.c \
		./utils/ft_split.c \
		./utils/ft_isnumber.c \
		./utils/ft_atoi.c \
		./utils/add_front_list.c \
		./utils/create_node.c \
		./utils/add_final_list.c \
		./utils/ft_putnbr.c \
		./utils/ft_putnbr_hex.c \
		./utils/add_index_node.c \
		./utils/print_list.c \
		./utils/stack_size.c \
		./utils/ft_free_array.c \
		./utils/free_stack.c \
		./utils/print_error.c \
		./utils/validation_number_repet.c \
		./utils/is_valid_number.c \
		./sort/sort_four.c \
		./sort/sort_three.c \
		./sort/sort_five.c \
		./utils/find_min_pos.c \
		./utils/rotate_min_pos.c \
		./printf/ft_printf.c \
		./movements/swap.c \
		./movements/push.c \
		./movements/reverse.c \
		./movements/rotate.c \
		./movements/do_pb.c \
		./movements/do_pa.c \
		./movements/do_sa.c \
		./movements/do_rra.c \
		./movements/do_ra.c \
		./main.c \
		./push_swap.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

.o: .c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) && cd ./utils && rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME) a.out  && cd ./utils && rm -rf $(OBJS)

re: fclean all

.PHONY: all clean fclean re