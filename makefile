prog=exec
prob1= gerenciador_sal.cpp modulo_func.cpp
prob2=null
prob3=null
cc=g++
flags=-O0 -g -Wall -pedantic
obj= *.o

objetos:
	$(cc) $(flags) -c $(prob1)

rodar:
	$(cc) $(flags) $(prob1) -o $(prog)
	./$(prog)

clear:
	rm -f core /bin/$(obj)
