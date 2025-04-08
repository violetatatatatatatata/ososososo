#ifndef OSO.H
#define OSO.H

#define MAX_JUGADORES 6
#define MIN_JUGADORES 2
#define MAX_HUMANOS 2
#define MAX_FILAS
#define MAX_COLUMNAS
#define JUGADOR_HUMANO 1

#include <stdio.h>
#include "azar.h"
#include "colores.h"
#include "duerme.h"

typedef struct Jugador {
	int	tipo;
	int	puntos;
} t_jugador;

typedef struct Tablero {
	int	f, c;
	char	tablero[f][c];
	char	letra;
} t_tablero;

typedef struct Juego {
	Jugador	id;
	Tablero tablero;
} t_juego;

int	leer_entrada();
void	print_tablero();
void	actualizar_tablero();
void	juega_maquina();
void	select_orden();
int	check_estado();
void	actualizar_puntuacion();
void	print_puntuacion();
int	determinar_ganador();
