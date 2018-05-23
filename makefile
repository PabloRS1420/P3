all:		clean p2 dist cleantemp

########################################################
CC=gcc
CFLAGS= -g -Wall -pedantic -ansi
EJS = p3_e1 p3_e2 p3_e4
########################################################
OBJECTSP3E1 = p3_e1.o queue.o point.o
OBJECTSP3E2 = p3_e2.o queue.o point.o map.o map_solver.o
OBJECTSP3E4 = p3_e4.o list.o
########################################################

all: $(EJS) clear

p3_e1: $(OBJECTSP2E1)
	$(CC) $(CFLAGS) -o p3_e1 $(OBJECTSP3E1)

p3_e2: $(OBJECTSP2E2)
	$(CC) $(CFLAGS) -o p3_e2 $(OBJECTSP3E2)

p3_e4: $(OBJECTSP2E3)
	$(CC) $(CFLAGS) -o p3_e4 $(OBJECTSP3E4)

p3_e1.o: p3_e1.c queue.h point.h types.h
	$(CC) $(CFLAGS) -c p3_e1.c

p3_e2.o: p3_e2.c queue.h point.h map.h map_solver.h types.h
	$(CC) $(CFLAGS) -c p3_e2.c

p3_e4.o: p3_e4.c list.h types.h
	$(CC) $(CFLAGS) -c p3_e4.c

point.o: point.c point.h
	$(CC) $(CFLAGS) -c point.c

map.o: map.c map.h
	$(CC) $(CFLAGS) -c map.c
	
functions.o: functions.c functions.h
	$(CC) $(CFLAGS) -c functions.c

element.o: element.c element.h point.h
	$(CC) $(CFLAGS) -c element.c

list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.c

stack_element.o: stack_element.c stack_element.h element.h
	$(CC) $(CFLAGS) -c element.c

map_solver.o: map_solver.c map_solver.h
	$(CC) $(CFLAGS) -c map_solver.c

queue.o: queue.c queue.h
	$(CC) $(CFLAGS) -c queue.c


clear:
	rm -rf *.o 

clean:
	rm -rf *.o $(EJS)

run:
	@echo ">>>>>>Running p3_e1"
	./p3_e1
	@echo ">>>>>>Running p3_e2"
	./p3_e2 m1.txt
	@echo ">>>>>>Running p3_e4"
	./p3_e4 datos.txt

runv:
	@echo ">>>>>>Running p3_e1 with valgrind"
	valgrind --leak-check=full ./p3_e1
	@echo ">>>>>>Running p3_e2 with valgrind"
	valgrind --leak-check=full ./p3_e2 m1.txt
	@echo ">>>>>>Running p3_e4 with valgrind"
	valgrind --leak-check=full ./p3_e4 datos.txt

