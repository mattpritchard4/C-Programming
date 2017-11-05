CFLAGS=-Wall -Werror -g -Wextra -Wunused
LDFLAGS=-g

ALL=ex-2-05

all: ex-2-05

ex-2-05.o: ex-2-05.c

ex-2-05: ex-2-05.o

clean:
	rm -rf $(TARGETS) *.o

