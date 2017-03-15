default:
	gcc -c -o StackLib.o StackLib.c -Wall
	ar rcs StackLib.a StackLib.o
	gcc -o Main Main.c StackLib.a -Wall
	mv Main ..

clean:
	rm ../Main
	rm StackLib.a StackLib.o
