.SUFFIXES:.c .o
CC=g++
OBJK=$(SRC:.cpp=.o)
EXEC=test
SRC=main.cpp\
	EntityMyDataType.cpp\
	EntityMyTableProperty.cpp\
	EntitySingleDataIndexEntry.cpp\
	EntitySingleDataTypeInformation.cpp\
	EntitySingleTablePropertyStructure.cpp\
	EntityTableSet.cpp\
	EntityTableSpace.cpp\
	EntityDataIndexDataDocument.cpp\
	EntityDataTypeInformation.cpp\
	EntityDataTypeSet.cpp\
	EntityDataTypeStructure.cpp
	
start:  $(OBJK)
	$(CC) -o $(EXEC) $(OBJK)
	@echo ---------ok-------   
.c.o:
	$(CC) -o $@ -c $< 
clean:
	rm -f $(OBJK)
