LDDIR=$(shell pwd)

SUBDIRS= src 

all: 	
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d; \
	done

clean:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d $@; \
	done
