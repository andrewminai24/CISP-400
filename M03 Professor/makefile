CC=g++
CFLAGS= -c -Wall -std=c++14
EXENAME= M02
default: main.o calculator.o Token_stream.o
	$(CC) main.o calculator.o Token_stream.o -o $(EXENAME)
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
calculator.o: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp
Token_stream.o: Token_stream.cpp
	$(CC) $(CFLAGS) Token_stream.cpp
clean:
	rm *o $(EXENAME)
run:
	./$(EXENAME)
