#include <stdio.h>
float pago1, bolsa, pago2, pago3;
int depa;
int main()
{
    printf("buenas tardes, ¿cuanto gasto en su compra?\n");
    scanf("%f",&pago1);
    printf("¿cuantas bolsas llevo?\n");
    scanf("%f",&bolsa);
    pago2 = pago1 + (bolsa*.1);
    printf("¿en que departamento compro? \n Perfumeria = 1 \n Salchichoneria = 2 \n Carniceria = 3 \n Limpieza = 4 \n");
    scanf("%d",&depa);
    switch(depa){
        case 1 :
            pago3 = pago2-((pago2*20)/100);
            printf("usted pagaria un total de: %1.2f, pero por comprar en perfumeria usted pagara: %1.2f", pago2, pago3);
            break;
        case 2 :
            pago3 = pago2-((pago2*40)/100);
            printf("usted pagaria un total de: %1.2f, pero por comprar en Salchichoneria usted pagara: %1.2f", pago2, pago3);
            break;
        case 3 :
            pago3 = pago2-((pago2*20)/100);
            printf("usted pagaria un total de: %1.2f, pero por comprar en carniceria usted pagara: %1.2f", pago2, pago3);
            break;
        case 4 :
            pago3 = pago2-((pago2*35)/100);
            printf("usted pagaria un total de: %1.2f, pero por comprar en Limpieza usted pagara: %1.2f", pago2, pago3);
    }
    return 0;
}
