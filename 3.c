/*Taller 5. Clases de almacenamientos
Barrios Retana Lizeth
22/sep/2023
3. Declara una variable estática llamada contador en una función y muestra su
valor en cada llamada a la función.  *
BRL_Taller5_act3
*/
#include <stdio.h>

void contador()
{
    static int contador = 0;
    contador++;
    printf("Valor de contador: %d\n", contador);
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        contador();
    }

    return 0;
}

/*
¿Qué sucede con la variable al salir de la función? Aumenta el valor.
¿Cómo difiere de una variable automática? Que esta variable estatica solo aumenta el valor cuando la mandan a llamar.
*/