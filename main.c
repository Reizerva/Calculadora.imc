
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//calculadora de IMC
#include <stdio.h>

int main()
{
    float imc;
    float peso;
    float altura;
    printf("digite seu peso em kg: \n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: \n");
    scanf("%f", &altura);
    imc=peso/(altura*altura);
    printf("Seu imc é:%.2f", imc);

    return 0;
}
