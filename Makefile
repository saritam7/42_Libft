NAME=libft.a
CC=gcc
FLAGS=-Wall -Wextra -Werror

SRCS= ft_isdigit.c \
ft_memset.c \
ft_isprint.c \
ft_tolower.c \
ft_bzero.c \
ft_memcpy.c \
ft_strlen.c \
ft_toupper.c \
ft_isalnum.c \
ft_strncmp.c \
ft_isalpha.c \
ft_strchr.c \
ft_isascii.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strrchr.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_memchr.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
#ft_split.c \

BONUS = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c



OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

# Mandas a crear el .a
all: crearPuntoA

bonus: crearPuntoA_BONUS

$(NAME): crearPuntoA

#gcc main, funcion(es), 3w's, (Creas los .o)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

#crear .a
crearPuntoA: $(OBJS)
	ar -rcs $(NAME) $(OBJS)

crearPuntoA_BONUS: $(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)

#pasar test
TEST1 = ~/Desktop/42_Libft/libftTester
TEST2 = ~/Desktop/42_Libft/libft-unit-test
TEST3 = ~/Desktop/libft-war-machine

test: $(NAME)
	make -C $(TEST1)
	make f -C $(TEST2)
	bash $(TEST3)/grademe.sh

# Borra todos los .o
clean:
	rm -rf $(OBJS)

# Borra todos los .o y además, el .a
fclean: clean
	rm  -rf $(NAME) $(BONUS_OBJS)

# Borras todo, y luego haces todo de nuevo
re: fclean all

#sirve para que sepa que no quiero hacer un archivo sino que entre a la orden
.PHONY: all crearPuntoA clean fclean re