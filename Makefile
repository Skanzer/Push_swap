NAME = push_swap

FILENAMES = main.c\
ft_stk_utils.c\
ft_stk_utils_1.c\
error_check.c\
free_functions.c\
ft_atoi2.c\
small_sort.c\
sorted.c\
swap_operations.c\
rotate_operations.c\
push_operations.c\
reverse_operations.c\
radix_sort.c\
put_index.c\
sort_3.c\

LIBNAMES = ./libft/libft.a

LIBFT = ./libft/

CFLAGS = -Wall -Werror -Wextra
CC = cc
OBJS	:=${FILENAMES:.c=.o}

$(NAME): $(OBJS)
		make -C $(LIBFT)
		$(CC) $(CFLAGS) $(FILENAMES) $(LIBNAMES) -o $(NAME)

all: $(NAME)

clean:
		make clean -C $(LIBFT)
		rm -f $(OBJS)

fclean: clean
		make fclean -C $(LIBFT)
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re