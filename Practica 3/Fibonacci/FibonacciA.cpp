#include <stdio.h>
int f=0;
int f_2=1;
int fibo=0;
int numero;
int main(){
    printf("¿cuantos numeros de fibonacci quiere?\n");
    scanf("%d",&numero);

    for(int i=0;i<numero;i++){
        fibo=f+f_2;
        printf("%d \t",fibo);
        f=f_2;
        f_2=fibo;
    }
    return 0;
}
   
