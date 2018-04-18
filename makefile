all:		clean p2 dist cleantemp

CFLAGS = -Wall -ansi -pedantic -g
 ##########################################################################

p3_e1:	queue.o point.o
		gcc -o p3_e1 queue.o point.o

p3_e2:	queue.o map.o point.o map_solver.o
		gcc -o p3_e2 queue.o map.o point.o map_solver.o

p3_e4:	list.o
		gcc -o p3_e4 list.o

element.o:	element.c element.h point.h types.h
		gcc -c $(CFLAGS) element.c

functions.o:	functions.c functions.h
		gcc -c $(CFLAGS) functions.c

list.o:	list.c list.h functions.h types.h
		gcc -c $(CFLAGS) list.c

map.o:	map.c map.h element.h queue.h point.h stack_element.h types.h
		gcc -c $(CFLAGS) map.c

point.o: 	point.c point.h types.h
		gcc -c $(CFLAGS) point.c

map_solver.o:	map_ solver.c map_ solver.h map.h point.h
		gcc -c $(CFLAGS) map_solver.c
    
queue.o:	queue.c queue.h element.h functions.h types.h
		gcc -c $(CFLAGS) queue.c
 
stack_element.o:	stack_element.c stack_element.h element.h types.h
		gcc -c $(CFLAGS) stack_element.c

cleantemp:
		rm -f *.o

clean:
rm -f *.exe
