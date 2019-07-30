#include <iostream>
#include <SFML/Graphics.hpp>
#include "PantallaInicial.h"
#include "Juego.h"
int main()

{Juego pong(10, 10, 800, 300, "Juego Pong");
pong.ejecutar();
return 0;
}
