#include <stdio.h>
#include<math.h>
float GM, Tasa;
int EC;
int main()
{
    printf("¿cual es su estado civil?\n Soltero/a=1\n casado/a= 2\n ");
    scanf("%d",& EC);
    switch(EC){
        case 1:
            printf("¿cuanto gana mensual mente?\n");
            scanf("%f",&GM);
            if(GM<32000){
                Tasa=(GM*10)/100;
                printf("su tasa a pagar es de:%1.1f",Tasa);
            }
            else if (GM>32000){
                Tasa=(GM*25)/100;
                printf("su tasa a pagar es de:%1.1f",Tasa);  
            }
            break;
        case 2:
            printf("¿cuanto gana mensual mente?\n");
            scanf("%f",&GM);
            if(GM<64000){
                Tasa=(GM*10)/100;
                printf("su tasa a pagar es de:%1.3f",Tasa);
            }
            else if (GM>64000){
                Tasa=(GM*25)/100;
                printf("su tasa a pagar es de:%1.3f",Tasa);  
            }
            break;
    }
    return 0;
}
