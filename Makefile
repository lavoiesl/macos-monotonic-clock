
CC     = cc
CFLAGS = -O2 -Wall -std=c11
PREFIX = /usr/local
EXEC   = monotonic

build : $(EXEC)

clean : 
	rm $(EXEC)

$(EXEC) : monotonic.c Makefile
	$(CC) $(CFLAGS) -o $@ $<

install : $(EXEC)
	install -v $(EXEC) $(PREFIX)/bin/$(EXEC)

test: $(EXEC)
	./$(EXEC) | grep -E ^[0-9]+$
