task: compile execute

compile: firstTask.c
	        g++ firstTask.c -o firstTask.o

execute: firstTask.o
	        ./firstTask.o

