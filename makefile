main: brokenfile.c
	gcc -g brokenfile.c -o brokenfile
	gcc -g brokenfile2.c -o brokenfile2
	gcc -g brokenfile3.c -o brokenfile3 -Wall

clean:
	rm -f brokenfile brokenfile2 *.o

all: main
