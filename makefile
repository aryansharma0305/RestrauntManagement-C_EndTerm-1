run: main.o ui.o linked_list.o file_handler.o data_handler.o customer.o admin.o
	gcc -o app main.o ui.o linked_list.o file_handler.o data_handler.o customer.o admin.o -lqrencode; make clean && ./app

main.o:main.c
	gcc -c main.c -lqrencode

ui.o:ui.c
	gcc -c ui.c -lqrencode

linked_list.o:linked_list.c
	gcc -c linked_list.c

file_handler.o:file_handler.c
	gcc -c file_handler.c

data_handler.o:data_handler.c
	gcc -c data_handler.c

customer.o:customer.c
	gcc -c customer.c

admin.o:admin.c
	gcc -c admin.c

clean:
	rm -f *.o
