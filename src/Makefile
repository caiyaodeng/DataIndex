.SUFFIXES:.cpp .o
include paths

LDDIR = $(shell pwd)
CFLAGS = -L. $(LIBENTITY_LDFLAGS)
LIBS = $(LIBENTITY_LDFLAGS)
CC = g++ -g -Wall
TARGET = dataIndex
SUBDIRS = Entity Kernel/DiskSimulator/\
		 Kernel/FreeSpace/ Extend/B+tree/\
		 Boot Buffer Lock TableSpace\
		 UserInterface DataType #public
SOURCE = DataIndex.cpp	
OBJK = $(SOURCE:.cpp = .o) 
all: $(TARGET)

$(TARGET):LIB_STATIC $(OBJK)
	$(CC) -o $(TARGET) $(OBJK) $(LIBS)
	mv dataIndex ../bin/
$(OBJK):
	$(CC) -c $(CFLAGS) $< $@
LIB_STATIC:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d; \
	done
	@echo --------static link lib done!-------------------

clean:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d $@; \
	done
	@echo --------static link lib removed!-------------------
	rm ../bin/$(TARGET)
	@echo --------execute file removed!-------------------
