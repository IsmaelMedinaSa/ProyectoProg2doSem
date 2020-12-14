#include<stdio.h>
int matriz[6][10],matriz2[6][10];
int i,j,k,l,opcion;

main()
{
    printf("primera matriz");
    for(i=0;i<6;i++){
        for(j=0;j<10;j++){
            printf("¿cuanto vale su matriz [%d][%d]?\n",i ,j);
            scanf("%d",& matriz[i][j]);
           
        }
    }
    printf("segunda matriz");
    for(k=0;k<6;k++){
        for(l=0;l<10;l++){
            printf("¿cuanto vale su matriz [%d][%d]?\n",k ,l);
            scanf("%d",& matriz2[k][l]);
        }
    }
    printf("¿quiere imprimir sus matrices?\n1=si\t2=no\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1 :printf("matiz 1\n %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n", matriz[0][0], matriz[0][1],
                matriz[0][2], matriz[0][3], matriz[0][4], matriz[0][5], matriz[0][6], matriz[0][7],
                matriz[0][8], matriz[0][9],matriz[1][0], matriz[1][1],matriz[1][2], matriz[1][3],
                matriz[1][4], matriz[1][5], matriz[1][6], matriz[1][7],matriz[1][8], matriz[1][9],
                matriz[2][0], matriz[2][1],matriz[2][2], matriz[2][3], matriz[2][4], matriz[2][5],
                matriz[2][6], matriz[2][7],matriz[2][8], matriz[2][9],matriz[3][0], matriz[3][1],
                matriz[3][2], matriz[3][3], matriz[3][4], matriz[3][5], matriz[3][6], matriz[3][7],
                matriz[3][8], matriz[3][9],matriz[4][0], matriz[4][1],matriz[4][2], matriz[4][3],
                matriz[4][4], matriz[4][5], matriz[4][6], matriz[4][7],matriz[4][8], matriz[4][9],
                matriz[5][0], matriz[5][1],matriz[5][2], matriz[5][3], matriz[5][4], matriz[5][5],
                matriz[5][6], matriz[5][7], matriz[5][8], matriz[5][9]);
                printf("matiz 2 \n %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n"" %d\t %d\t %d\t %d\t %d\t %d\n"
        " %d\t %d\t %d\t %d\t %d\t %d\n", matriz2[0][0], matriz2[0][1],
                matriz2[0][2], matriz2[0][3], matriz2[0][4], matriz2[0][5], matriz2[0][6], matriz2[0][7],
                matriz2[0][8], matriz2[0][9],matriz2[1][0], matriz2[1][1],matriz2[1][2], matriz2[1][3],
                matriz2[1][4], matriz2[1][5], matriz2[1][6], matriz2[1][7],matriz2[1][8], matriz2[1][9],
                matriz2[2][0], matriz2[2][1],matriz2[2][2], matriz2[2][3], matriz2[2][4], matriz2[2][5],
                matriz2[2][6], matriz2[2][7],matriz2[2][8], matriz2[2][9],matriz2[3][0], matriz2[3][1],
                matriz2[3][2], matriz2[3][3], matriz2[3][4], matriz2[3][5], matriz2[3][6], matriz2[3][7],
                matriz2[3][8], matriz2[3][9],matriz2[4][0], matriz2[4][1],matriz2[4][2], matriz2[4][3],
                matriz2[4][4], matriz2[4][5], matriz2[4][6], matriz2[4][7],matriz2[4][8], matriz2[4][9],
                matriz2[5][0], matriz2[5][1],matriz2[5][2], matriz2[5][3], matriz2[5][4], matriz2[5][5],
                matriz2[5][6], matriz2[5][7], matriz2[5][8], matriz2[5][9]);
                break;
        case 2 : printf("que tenga buen dia");
                break;
    }

    return 0;
}
