#include <stdio.h>
#include<math.h>
float a, b, c, x, resultado1, resultado2, negativo;
int main()
{
    printf("¿cuanto vale a?\n");
    scanf("%f",&a);
    printf("¿cuanto vale b?\n");
    scanf("%f",&b);
    printf("¿cuanto vale c?\n");
    scanf("%f",&c);
    printf("¿cuanto vale x?\n");
    scanf("%f",&x);
    negativo=pow(x,2)-4*a*c;
    if( negativo < 0 ){
        printf("no puede quedar un negativo dentro de la raiz y usted tiene dentro:%1.1f",negativo);
    }
    else if(negativo>0){
        resultado1=(-b+sqrt(pow(x,2)-4*a*c))/(2*a);
        resultado2=(-b-sqrt(pow(x,2)-4*a*c))/(2*a);
        printf("su x1 vale:%1.1f \n",resultado1);
        printf("su x2 vale:%1.1f \n",resultado2);
    }
    return 0;
}
