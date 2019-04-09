all:prod
CC = gcc -Wall -std=c99
CPP = g++
#CPPFLAGS= -I "include/" `mysql_config --cflags --libs`
#LDFLAGS=`mysql_config --cflags --libs`

debug: CC += -g3 -gdwarf-2 -g

prod: CPP += -g3 -gdwarf-2 -g

prod:	
	$(CPP) MapTheclass.cpp -o cppDemo.bin
debug:	
	$(CC) DoublyLL.c -o cDemo.bin	

clean:
	rm -rf *.bin *.core