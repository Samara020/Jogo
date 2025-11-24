IDIR = include
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I$(IDIR)

ODIR = obj
LIBS = -lm

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,$(ODIR)/%.o,$(SRC))

EXEC = jogo

all: $(EXEC)

$(ODIR):
	mkdir -p $(ODIR)

$(ODIR)/%.o: src/%.c | $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f $(ODIR)/*.o $(EXEC)

run: $(EXEC)
	./$(EXEC)
