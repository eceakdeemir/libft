
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h

SRC = 	ft_isalnum.c ft_bzero.c\
		ft_isalpha.c ft_isascii.c \
		ft_isdigit.c  ft_isprint.c \
		ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c \
		ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c \
		ft_strncmp.c ft_strdup.c \
		ft_calloc.c ft_strnstr.c \
		ft_atoi.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c \
		ft_itoa.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c \
		ft_striteri.c ft_split.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = ${SRC:.c=.o}
BONUS_OBJ = ${BONUS_SRC:_bonus.c=_bonus.o}

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar r $(NAME) $(OBJ)

bonus: $(NAME) $(BONUS_OBJ)
	@ar r $(NAME) $(BONUS_OBJ)

clean:
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
