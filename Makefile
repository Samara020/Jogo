IDIR = include
ODIR = obj

# Compilador
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I$(IDIR)

SDL_CFLAGS = $(shell pkg-config --cflags sdl2 SDL2_mixer)

SDL_LIBS = $(shell pkg-config --libs sdl2 SDL2_mixer)

# CFLAGS combinados para a compilação de .c
CFLAGS += $(SDL_CFLAGS)

LIBS = $(SDL_LIBS) -lm

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,$(ODIR)/%.o,$(SRC))

EXEC = jogo

all: $(EXEC)

$(ODIR):
	mkdir -p $(ODIR)

$(ODIR)/%.o: src/%.c | $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f $(ODIR)/*.o $(EXEC)

run: $(EXEC)
	./$(EXEC)