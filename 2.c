/*Taller 5. Clases de almacenamientos
Barrios Retana Lizeth
22/sep/2023
2. Declara una variable externa llamada saldo en un archivo fuente (archivo.c) y accede a ella desde otro archivo fuente (otroarchivo.c).
Modifica su valor en ambos archivos y muestra el valor final. ¿Cómo afecta la visibilidad y el tiempo de vida de la variable externa?
BRL_Taller5_act2
*/
#include <stdio.h>
#include "archivo_fuente.h"
void sumasaldo(int cantidad);
void restasaldo(int cantidad);

int saldo;

int main()
{
    saldo = 0;
    sumasaldo(100);
    restasaldo(20);
    printf("SALDO DESPUES DE MODIFICARLO: %d\n", saldo);
    return 0;
}
