CC = gcc
CFLAGS = -Wall -g
OBJS = main.o parser.o executor.o builtins.o

all: mini_shell

mini_shell: $(OBJS)
	$(CC) $(CFLAGS) -o mini_shell $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o mini_shell
