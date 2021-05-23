.PHONY: all clean fclean re

CFLAGS := -Wall -Werror -Wextra
NAME := libft.a
CC := clang

SRCS := memory1.c	\
		memory2.c	\
		string1.c	\
		string2.c	\
		ctype1.c	\
		ctype2.c	\
		fildes.c	\
		strnbr.c	\
		strproc.c


OBJS := $(SRCS:%.c=%.o)


all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

