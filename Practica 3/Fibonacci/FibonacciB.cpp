#include <stdio.h>
float numero;
float aureo;
float f=0;
float f_2=1;
float fibo=0;
int main(){
    printf("¿cuantos numeros de fibonacci quiere?\n");
    scanf("%f",&numero);
    for(int i=0;i<numero;i++){
        fibo=f+f_2;
        printf("%1.1f \t",fibo);
        f=f_2;
        f_2=fibo;

    }
    aureo=f_2/f;
    printf("\nsu aproximacion del numero aurio es de:%f",aureo);
    return 0;
}
   
