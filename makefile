CC = g++
CFLAGS = -Wall -Wextra -O3

# ---------------------------------------

source = $(wildcard *.cpp)
objects = $(source:.cpp=.o)
exec = carry

# ---------------------------------------

.PHONY: clean purge

# ---------------------------------------

$(exec): $(objects)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(objects)

purge:
	rm -f $(objects) $(exec)
