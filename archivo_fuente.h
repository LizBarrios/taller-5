#include <stdio.h>
int saldo;

void sumasaldo(int cantidad);
void restasaldo(int cantidad);

void sumasaldo(int cantidd)
{
    saldo = saldo + cantidd;
}
void restasaldo(int cantidad)
{
    saldo = saldo - cantidad;
}
