rational: rational.o adt_rational.o rational.h
	gcc -o rational rational.o adt_rational.o

rational.o: rational.c rational.h
adt_rational.o: adt_rational.c rational.h

test: rational
	./rational

clean:
	rm -f rational *~ *.o
