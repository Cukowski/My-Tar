# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror

# Source files
SRCS = main.c header.c helper.c create.c
HEADERS = header.h helper.h create.h
OBJS = $(SRCS:.c=.o)

# Target executable
TARGET = my_tar

.PHONY: all clean fclean re test options

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

test: all
	./$(TARGET)

options:
	# Define your custom build options here
	# For example: $(CC) $(CFLAGS) -o my_custom_target my_custom_source.c