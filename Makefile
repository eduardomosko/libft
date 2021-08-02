.PHONY: all clean fclean re

CFLAGS := -Wall -Werror -Wextra
NAME := libft.a
CC := clang

SRCS := ft_itoa.c			\
		ft_memcmp.c			\
		ft_tolower.c		\
		ft_isdigit.c		\
		ft_memmove.c		\
		ft_strsplit.c		\
		ft_putendl_fd.c		\
		ft_isprint.c		\
		ft_strtrim.c		\
		ft_isalnum.c		\
		ft_strrchr.c		\
		ft_memcpy.c			\
		ft_toupper.c		\
		ft_strchr.c			\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_strlcat.c		\
		ft_putstr_fd.c		\
		ft_atoi.c			\
		ft_strdup.c			\
		ft_isalpha.c		\
		ft_putnbr_fd.c		\
		ft_substr.c			\
		ft_memset.c			\
		ft_strjoin.c		\
		ft_calloc.c			\
		ft_isascii.c		\
		ft_strnstr.c		\
		ft_memchr.c			\
		ft_strncmp.c		\
		ft_strlen.c			\
		ft_bzero.c			\
		ft_strlcpy.c

BONUS_SRCS :=	ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstnew.c			\
				ft_lstmap.c			\
				ft_lstclear.c		\
				ft_lstlast.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstsize.c

OBJS := $(SRCS:%.c=%.o)
BONUS_OBJS := $(BONUS_SRCS:%.c=%.o)


all: $(NAME)

clean:
	rm -f $(BONUS_OBJS) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS) libft.h
	ar rcs $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

bonus: $(NAME) $(BONUS_OBJS)
	ar rs $(NAME) $(BONUS_OBJS)

