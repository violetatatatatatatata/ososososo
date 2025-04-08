# Juego del OSO
## Proyecto de Fonaments de Ordinadors 2024-2025

- Tablero:
    - matriz n x n
    - función para imprimir el tablero
    - función para imprimir letra dentro del tablero
    - función para comprobar "OSO" desde una posición
- Jugador:
    - nombre
    - tipo (humano/máquina)
    - puntos acumulados
- Juego:
    - lista de jugadores
    - tablero
    - índice del jugador actual
    - bucle principal del juego

### Inicialización del juego
- Input: número de jugadores (mínimo 2), tamaño del tablero n, tipo de jugador (humano/máquina)
- Crear tablero de n x n vacío.
- Inicializar puntuación de todos los jugadores a 0.
- Seleccionar jugador inicial (por orden o aleatorio).

### Bucle main
- Mientras queden casillas vacías:
    Mostrar el estado actual del tablero.
    Mostrar de quién es el turno
    
    - Si el jugador es humano:
        Pedir fila, columna, y letra ('S' o 'O')
        Verificar que la casilla está vacía y la letra es válida
    - Si el jugador es máquina:
        Elegir fila y columna al azar de una casilla vacía
        Elegir letra al azar entre 'S' y 'O'

    - Colocar la letra en la casilla elegida

    - contar cuántos "oso" se han formado con esta jugada

    - Sumar puntos_nuevos a la puntuación del jugador
  
    - Si puntos_nuevos > 0:
        El mismo jugador juega otra vez (no se cambia el turno)
      Sino:
        Pasar el turno al siguiente jugador

### Detectar aparición del OSO
- Buscar en 8 direcciones desde la casilla jugada si hay un patrón "S-O-S"
  - Reglas:
    Si colocó una 'O':
        Mirar si hay una 'S' antes y una 'S' después en la misma dirección
    Si colocó una 'S':
        Mirar si hay una 'O' justo después y una 'S' después de la 'O' en la misma dirección
- Sumar tantos puntos como "OSO" se encuentren.

### Fin del bucle
Si no quedan casillas vacías:
    Mostrar puntuación de cada jugador
    Determinar el ganador (máxima puntuación)
    Si hay empate, indicarlo
