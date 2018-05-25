
CC     = cc
CFLAGS = -O2 -Wall
PREFIX = /usr/local
EXEC   = monotonic

build : $(EXEC)

clean : 
	rm $(EXEC)

$(EXEC) : monotonic.c
	$(CC) $(CFLAGS) $(INC) -o $@ $?

install : $(EXEC)
	install -v $(EXEC) $(PREFIX)/bin/$(EXEC)
