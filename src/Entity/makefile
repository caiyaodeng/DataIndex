
CC = g++ -g -Wall
OUT = libentity.a

all: $(OUT)
	cp -p $(OUT) ../../lib 
	rm $(OUT)

LT_SRC = EntityBlock.cpp\
		 EntityDataIndexDataDocument.cpp\
		 EntityDataTypeSet.cpp\
		 EntityDataTypeStructure.cpp\
		 EntityMyDataType.cpp\
		 EntityMyTableProperty.cpp\
		 EntitySingleDataIndexEntry.cpp\
		 EntitySingleDataTypeInformation.cpp\
		 EntitySingleTablePropertyStructure.cpp\
		 EntityTableSet.cpp\
		 EntityTableSpace.cpp
mZLT_OBJ = $(LT_SRC:.cpp=.o) 


$(LT_OBJ): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
	
$(OUT):$(LT_OBJ)
	ar cru $@ $^
	ranlib $@
clean: 
	rm -f $(LT_OBJ) ../../lib/$(OUT)
