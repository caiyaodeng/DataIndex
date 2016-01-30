LDDIR=$(shell pwd)

SUBDIRS= Entity Kernel/DiskSimulator/\
		 Kernel/FreeSpace/ Extend/B+tree/\
		 Boot Buffer Lock TableSpace\
		 UserInterface DataType #public

all: 	
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d; \
	done

clean:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d $@; \
	done
