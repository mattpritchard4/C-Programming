CFLAGS=-Wall -Werror -g -Wextra -Wunused
LDFLAGS=-g

ALL=ex-2-06

all: ex-2-06 ex-2-07

ex-2-06.o: ex-2-06.c

ex-2-06: ex-2-06.o

ex-2-07.o: ex-2-07.c

ex-2-07: ex-2-07.o

clean:
	rm -rf $(TARGETS) *.o

