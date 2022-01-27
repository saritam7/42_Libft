NAME=libft.a
CC=gcc
FLAGS=-Wall -Wextra -Werror

SRCS= ft_isdigit.c \
ft_memset.c \
ft_isprint.c \
ft_atoi.c \
ft_strlcpy.c \
ft_tolower.c \
ft_bzero.c \
ft_memcpy.c \
ft_strlen.c \
ft_toupper.c \
ft_memchr.c \
ft_isalnum.c \
ft_memcmp.c \
ft_strncmp.c \
ft_isalpha.c \
ft_memcpy.c \
ft_strchr.c \
ft_isascii.c \
ft_memmove.c \
ft_strrchr.c \
ft_strlcat.c \
ft_strnstr.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
#ft_strmapi.c \
#ft_itoa.c \
#ft_split.c \
#ft_atoli.c \
#ft_split.c \
#ft_realloc.c \
#ft_putnbr_fd.c \

#BONUS= ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \


OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

# Mandas a crear el .a
all: crearPuntoA

$(NAME): crearPuntoA

#gcc main, funcion(es), 3w's, (Creas los .o)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

#crear .a
crearPuntoA: $(OBJS)
	ar -rcs $(NAME) $(OBJS)

crearPuntoA_BONUS: $(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)

# Borra todos los .o
clean:
	rm $(OBJS)

# Borra todos los .o y además, el .a
fclean: clean
	rm $(NAME)

# Borras todo, y luego haces todo de nuevo
re: fclean all

#sirve para que sepa que no quiero hacer un archivo sino que entre a la orden
.PHONY: all crearPuntoA clean fclean re