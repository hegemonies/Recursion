all: bin/main

bin/main: build/main.o build/sum_array.o build/fibonacci.o
	gcc -Wall -I src/Fibonacci/ -I src/sum_array/ -c build/sum_array.o -c build/fibonacci.o -c src/main.c -o bin/main

build/main.o: src/main.c
	gcc -Wall -Werror -I src/Fibonacci/ -I src/sum_array/ -c src/main.c -o build/main.o

build/fibonacci.o: src/Fibonacci/fibonacci.c
	gcc -Wall -Werror -I src/Fibonacci/ -c src/Fibonacci/fibonacci.c -o build/fibonacci.o

build/sum_array.o: src/sum_array/sum_array.c
	gcc -Wall -Werror -I src/sum_array/ -c src/sum_array/sum_array.c -o build/sum_array.o
	

.PHONY:

clean:
	rm -rf bin/* build/*

