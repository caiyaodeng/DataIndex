
CC = g++ -g -Wall
OUT = libbuffer.a

all: $(OUT)
	cp -p $(OUT) ../../lib 
	rm $(OUT)

LT_SRC = 

mZLT_OBJ = $(LT_SRC:.cpp=.o) 


$(LT_OBJ): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
	
$(OUT):$(LT_OBJ)
	ar cru $@ $^
	ranlib $@
clean: 
	rm -f $(LT_OBJ) ../../lib/$(OUT)
