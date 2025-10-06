# Makefile simples
CC = gcc
CFLAGS = -Wall -std=c99
PROGRAMA = arvore

all $(PROGRAMA)

$(PROGRAMA) arvore_balanceada.c
	$(CC) $(CFLAGS) -o $(PROGRAMA) arvore_balanceada.c

executar $(PROGRAMA)
	.$(PROGRAMA)

limpar
	rm -f $(PROGRAMA)

reiniciar limpar all