#include <stdio.h>
int edad;
int main()
{
    printf("¿cual es su edad?\n");
    scanf("%d",&edad);
    if(edad>=18){
        printf("usted tiene %d es mayor de edad\n", edad);
    }
    else if (edad<=18){
        printf("usted tiene %d por lo tanto es menor de edad\n", edad);
    }
    return 0;
}
