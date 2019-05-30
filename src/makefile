all:prod
CC = gcc -Wall -std=c99 -lpthread
CPP = g++ -Wall -lpthread -std=c++11

#CPPFLAGS= -I "include/" `mysql_config --cflags --libs`
#LDFLAGS=`mysql_config --cflags --libs`

debug: CC += -g3 -gdwarf-2 -g

prod: CPP += -g3 -gdwarf-2 -g

prod:	
#	$(CPP) ComplexClassDemo.cpp Complex.cpp -o cppDemo.bin
#	$(CPP) Template.cpp Complex.cpp  -o cppDemo.bin
	$(CPP) threadCPP2.cpp -o cppDemo.bin
debug:	
	$(CC) PointerCheck.c -o cDemo.bin	

clean:
	rm -rf *.bin *.core
