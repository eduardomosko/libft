.PHONY: all clean fclean re test

CFLAGS := -Wall -Werror -Wextra
NAME := libft.a
CC := clang

SRCS := memory1.c memory2.c string.c
OBJS := $(SRCS:%.c=%.o)

TEST_SRCS := main.c memory.c memccpy.c memmove.c string.c strlcat.c
TEST_SRCS := $(TEST_SRCS:%=tests/%)
TEST_OBJS := $(TEST_SRCS:%.c=%.o)


all: $(NAME)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: clean all

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

test: test.out
	./test.out

test.out: $(TEST_OBJS) $(NAME)
	$(CC) $(CFLAGS) $^ -o $@ -lbsd

