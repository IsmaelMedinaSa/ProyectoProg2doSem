#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5};
float x_inicial1,x_inicial2,x_inicial3; 
float x_iteracion_1,x_iteracion_2,x_iteracion_3; 
int i,j;
int main()
{
 // Gauss Seidel 
for(j=0;j<5;j++){
    if(j==0){
        x_iteracion_1 = b[0]/A[0][0];
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)+b[1])/A[1][1];
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        printf("x_1 en la iteracion 1 es igual a %f\n",x_iteracion_1);
        printf("x_2 en la iteracion 1 es igual a %f\n",x_iteracion_2);
        printf("x_3 en la iteracion 1 es igual a %f\n",x_iteracion_3);
    }
       
    else {
        x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+b[0])/A[0][0];
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)-(A[1][2]*x_iteracion_3)+b[1])/A[1][1];
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        printf("x_1 en la iteracion %d es igual a %f\n",j+1,x_iteracion_1);
        printf("x_2 en la iteracion %d es igual a %f\n",j+1,x_iteracion_2);
        printf("x_3 en la iteracion %d es igual a %f\n",j+1,x_iteracion_3);
        }
    }

}