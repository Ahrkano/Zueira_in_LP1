prog=exec
prob= main_gerenciador.cpp modulo_func.cpp
cc=g++
flags=-O0 -g -Wall -pedantic
obj= *.o

objetos:
	$(cc) $(flags) -c $(prob)

rodar:
	$(cc) $(flags) $(prob1) -o $(prog)
	./$(prog)

clear:
	rm -f core /bin/$(obj)
