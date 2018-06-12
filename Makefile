CFLAGS=-Wall -Werror -g -Wextra -Wunused -fsanitize=address -fsanitize=undefined
LDFLAGS=-g -fsanitize=address -fsanitize=undefined

ALL=ex-2-06

all: ex-2-06 ex-2-07 ex-2-08 ex-2-09 ex-2-10 ex-3-01 ex-3-02 ex-3-03 ex-3-04 ex-3-05 ex-3-06 strlen largest_negative

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

ex-3-01.o: ex-3-01.c

ex-3-01: ex-3-01

ex-3-02.o: ex-3-02.c

ex-3-02: ex-3-02

ex-3-03.o: ex-3-03.c

ex-3-03: ex-3-03

ex-3-04: ex-3-04

ex-3-05: ex-3-05

ex-3-06: ex-3-06

strlen: strlen

largest_negative: largest_negative.c

clean:
	rm -rf $(TARGETS) *.o

