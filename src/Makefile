.SUFFIXES:.cpp .o
include paths

LDDIR = $(shell pwd)
CFLAGS = -L. $(LIBENTITY_CFLAGS)
LIBS = $(LIBENTITY_LDFLAGS)
CC = g++ -g -Wall
TARGET = dataIndex
SUBDIRS = Entity Kernel/DiskSimulator/\
		 Kernel/FreeSpace/ Extend/B+tree/ Extend/DirectIndex/\
		 Boot Buffer Lock TableSpace\
		 UserInterface DataType #public
SOURCE = DataIndex.cpp	
OBJK = $(SOURCE:.cpp = .o) 
all: $(TARGET)

$(OBJK):
	$(CC) -c $(CFLAGS) $< -o $@

LIB_STATIC:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d; \
	done
	@echo --------static link lib done!-------------------

$(TARGET):LIB_STATIC $(OBJK)
	$(CC) -o $(TARGET) $(OBJK) $(LIBS)
	mv dataIndex ../bin/

clean:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d $@; \
	done
	@echo --------static link lib removed!-------------------
	rm ../bin/$(TARGET)
	@echo --------execute file removed!-------------------
