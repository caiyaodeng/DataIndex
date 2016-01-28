.SUFFIXES:.c .o
CC=g++
OBJK=$(SRC:.cpp=.o)
EXEC=test
SRC=main.cpp
start:  $(OBJK)
	$(CC) -o $(EXEC) $(OBJK)
	@echo ---------ok-------   
.c.o:
	$(CC) -o $@ -c $< 
clean:
	rm -f $(OBJK)
