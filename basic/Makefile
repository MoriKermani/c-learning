# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11

# Find all .c sources and derive target names (without .c)
SOURCES = $(wildcard *.c)
TARGETS = $(SOURCES:.c=)

# Declare phony targets
.PHONY: all clean $(SOURCES)

# Default target: build all executables
all: $(TARGETS)

# Rule to build each executable from its .c file
# e.g. make a → gcc -o a a.c
$(TARGETS): %: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Allow make a.c to work as well (phony)
$(SOURCES): %: $(basename %)

# Clean up executables and object files
clean:
	rm -f $(TARGETS) *.o

