.SUFFIXES:.cpp.o
CC = g++
SRC = EntityBlock.cpp\
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
OBJK = $(SRC:.cpp=.o)
EXEC = ../../lib/libentity.so
start: $(OBJK)
	$(CC) -shared -o $(EXEC) $(OBJK)
	@echo ---------------ok-------------------
.cpp.o:
	$(CC) -Wall -fPIC -g -o $@ -c $< 
clean:
	rm -f $(OBJK)
	rm -f $(EXEC)
	rm -f core.*
							
