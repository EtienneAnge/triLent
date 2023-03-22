exe: fonction.o trisLents.o main.o
	gcc fonction.o trisLents.o main.o -o exe && make clean
    
fonction.o: fonction.c fonction.h
	gcc -c -Wall fonction.c  -o fonction.o
    
trisLents.o: trisLents.c trisLents.h
	gcc -c -Wall trisLents.c  -o trisLents.o
    
main.o: main.c fonction.h trisLents.h
	gcc -c -Wall main.c -o main.o

clean:
	rm -f *.o
