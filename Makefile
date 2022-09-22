collect: compilef compileg executef executeg

compilef: f.c
	g++ f.c -o f.o
compileg: g.c
	g++ g.c -o g.o
executef: f.o
	./f.o
executeg: g.o
	./g.o	
