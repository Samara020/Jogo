IDIR = include
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I$(IDIR)

ODIR = obj
LIBS = -lm

_DEPS = batalha.h historia.h keyboard.h screen.h timer.h batalha_final.h historia_final.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_SRC = main.c batalha.c historia.c keyboard.c screen.c timer.c batalha_final.c historia_final.c
OBJ = $(patsubst %,$(ODIR)/%.o,$(_SRC:.c=.o))

EXEC = jogo

$(ODIR)/%.o: src/%.c $(DEPS)
    $(CC) -c -o $@ $< $(CFLAGS)

$(EXEC): $(OBJ)
    $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean run

clean:
    rm -f $(ODIR)/*.o *~ core

run: $(EXEC)
    ./$(EXEC)
