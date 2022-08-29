
#the compiler
CC = g++
 
#flags:
CFLAGS  = -g -Wall
 
#sources of input
SOURCES = main.cpp strlib.cpp

#sources of output
EXECUTABLE = strr

all:
	$(CC) $(SOURCES) $(CFLAGS) -MD -o $(EXECUTABLE) -lm