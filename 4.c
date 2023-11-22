/*Taller 5. Clases de almacenamientos
Barrios Retana Lizeth
22/sep/2023
4. Declara una variable de registro llamada temp y otra automática llamada valor
en una función. Compara el acceso y el tiempo de vida de estas variables.
BRL_Taller5_act4
*/

#include <stdio.h>
#include <time.h>

// Declaración de la función funcionEjemplo
void funcionEjemplo()
{
    register int temp = 0;
    int valor = 0;

    // Bucle que realiza un gran número de operaciones con 'temp' y 'valor'
    for (long long i = 0; i < 1000000000; i++)
    {
        temp += i;
        valor += i;
    }
}

// Función principal del programa
int main()
{
    time_t start, end;
    double elapsed_time;

    start = time(NULL); // Almacena el tiempo actual antes de ejecutar funcionEjemplo
    funcionEjemplo();   // Llamada a la función funcionEjemplo
    end = time(NULL);   // Almacena el tiempo actual después de ejecutar funcionEjemplo

    // Calcula la diferencia en segundos entre el tiempo final e inicial y almacena el resultado en elapsed_time
    elapsed_time = difftime(end, start);

    // Imprime el tiempo de ejecución de funcionEjemplo en segundos
    printf("Tiempo de ejecucion: %f segundos\n", elapsed_time);

    return 0; // Retorna 0 al sistema operativo indicando que el programa ha finalizado correctamente
}
