foobar : main.o ./ld/add.o ./ld/subtract.o ./ld/multiply.o ./ld/divide.o
	gcc -o foobar main.o ./ld/add.o ./ld/subtract.o ./ld/multiply.o ./ld/divide.o -I./ld -L./ld
main.o : main.c
	gcc -c main.c -I./ld
./lib/add.o : ./ld/add.c
	gcc -c ./ld/add.c
./lib/subtract.o : ./ld/subtract.c
	gcc -c ./ld/subtract.c
./lib/multiply.o : ./ld/multiply.c
	gcc -c ./ld/multiply.c
./lib/divide.o : ./ld/divide.c
	gcc -c ./ld/divide.c
clean:
	rm -f main.o ./ld/add.o ./ld/subtract.o ./ld/multiply.o ./ld/divide.o
	
