#include <stdio.h>
#include <conio.h>
#include <math.h>
float peso, edad, estatura, IMC;
char nombre [10];

int main(){
    printf("bienvenido ¿cual es su nombre?\n");
    scanf("%s",&nombre);
    printf("hola %s ¿podira decirme cuantos años tiene?\n", nombre);
    scanf("%f",&edad);
    printf("deacuerdo %s y ¿cuanto pesas (en kg)?\n", nombre);
    scanf("%f",&peso);
    printf("bueno ya casi terminamos, ahora porfavor introduzca su estatura en metros\n");
    scanf("%f",&estatura);
    IMC = peso/pow(estatura,2);
    if(IMC<18.5){
        printf("deacuerdo %s estos son los datos que tenemos sobre ti:\n edad:%3.3f \n peso:%3.3f \n estatura:%3.3f \n IMC:%3.3f \n Por lo tanto usted tiene un peso bajo \n",nombre, edad, peso, estatura, IMC);
    }
    else {
        if (IMC>=18.5&&IMC<=24.9){
            printf("deacuerdo %s estos son los datos que tenemos sobre ti:\n edad:%3.3f \n peso:%3.3f \n estatura:%3.3f \n IMC:%3.3f \n Por lo tanto usted tiene un peso normal \n",nombre, edad, peso, estatura, IMC);
        }
        else {
            if(IMC>=25&&IMC<=29.9){
                printf("deacuerdo %s estos son los datos que tenemos sobre ti:\n edad:%3.3f \n peso:%3.3f \n estatura:%3.3f \n IMC:%3.3f \n Por lo tanto usted tiene sobre peso \n",nombre, edad, peso, estatura, IMC);
            }
            else{
                if(IMC>=30&&IMC<=34.5){
                    printf("deacuerdo %s estos son los datos que tenemos sobre ti:\n edad:%3.3f \n peso:%3.3f \n estatura:%3.3f \n IMC:%3.3f \n Por lo tanto usted tiene obesidad tipo 1 \n",nombre, edad, peso, estatura, IMC);
            }
                else{
                    if(IMC>=35&&IMC<=39.9){
                    printf("deacuerdo %s estos son los datos que tenemos sobre ti:\n edad:%3.3f \n peso:%3.3f \n estatura:%3.3f \n IMC:%3.3f \n Por lo tanto usted tiene obesidad tipo 2 \n",nombre, edad, peso, estatura, IMC);
                     }
                    else{
                        if(IMC>=40){
                            printf("deacuerdo %s estos son los datos que tenemos sobre ti:\n edad:%3.3f \n peso:%3.3f \n estatura:%3.3f \n IMC:%3.3f \n Por lo tanto usted tiene HyperObesidad \n",nombre, edad, peso, estatura, IMC);
                        }
                    }
                }
        }
        
    }
        return 0;
  
}
}