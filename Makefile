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
		strproc.c	\
		strsplit.c

BONUS_SRCS := list1.c	\
			  list2.c

OBJS := $(SRCS:%.c=%.o)
BONUS_OBJS := $(BONUS_SRCS:%.c=%.o)


all: $(NAME)

clean:
	rm -f $(BONUS_OBJS) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

bonus: $(NAME) $(BONUS_OBJS)
	ar rs $(NAME) $(BONUS_OBJS)

