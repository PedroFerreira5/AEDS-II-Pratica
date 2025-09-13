# Nome do projeto
PROJ_NAME=pilha

# Arquivos .c
C_SOURCE=$(wildcard *.c)

# Arquivos objeto
OBJ=$(C_SOURCE:.c=.o)

# Compilador
CC=gcc

# Flags para compilação
CC_FLAGS=-c -Wall -g -pedantic

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CC_FLAGS) -o $@ $<

clean:
	rm -rf *.o $(PROJ_NAME) *~