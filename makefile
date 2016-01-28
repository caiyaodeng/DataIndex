.SUFFIXES:.c .o
CC=g++
OBJK=$(SRC:.cpp=.o)
EXEC=test
SRC=main.cpp\
	EntityDataTypeStructure.cpp\
	EntityDataTypeInformation.cpp\
	EntityAllDataTypeSet.cpp\
	EntityMyDataType.cpp\
	EntityMyTableProperty.cpp\
	EntitySingleTablePropertyStructure.cpp\
	EntityAllTableSet.cpp\
	EntityTableSpace.cpp
start:  $(OBJK)
	$(CC) -o $(EXEC) $(OBJK)
	@echo ---------ok-------   
.c.o:
	$(CC) -o $@ -c $< 
clean:
	rm -f $(OBJK)
