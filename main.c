/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "ponto.h"

int main()
{
  //Criando uma variavel de tipo PONTO que é um ponteiro para poder acessar os outros tipos dentro da struct
    Ponto *n;
  //Sempre que um método pedir um por parametro um ponteiro, deve-se passar o endereço de memória "&" para o ponteiro receber o endereço e conseguir apontar para ele
    capturaNumero(&n);
    imprimeNumero(&n);

    return 0;
}
