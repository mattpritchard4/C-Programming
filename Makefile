CFLAGS=-Wall -Werror -g -Wextra -Wunused
LDFLAGS=-g

ALL=ex-2-06

all: ex-2-06 ex-2-07 ex-2-08 ex-2-09 ex-2-10 ex-3-01

ex-2-06.o: ex-2-06.c

ex-2-06: ex-2-06.o

ex-2-07.o: ex-2-07.c

ex-2-07: ex-2-07.o

ex-2-08.o: ex-2-08.c

ex-2-08: ex-2-08.o

ex-2-09.o: ex-2-09.c

ex-2-09: ex-2-09.o

ex-2-10.o: ex-2-10.c

ex-2-10: ex-2-10.o

ex-2-10.o: ex-2-10.c

ex-2-10: ex-2-10

clean:
	rm -rf $(TARGETS) *.o

