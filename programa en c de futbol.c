// hacer un programa en c que hable sobre futbol de los octavos de final
#include<stdio.h>
#include<conio.h>

main()
{
	int opcion,opcionx;
	int jugados,ganados,perdidos,prom;
	int jugadosx,ganadosx,perdidosx,empatados,puntos;
	char equipo,equipox;
	printf("\nESTADISTICAS DEPORTIVAS");
	printf("\n1. BASEBALL");
	printf("\n2. FOOTBALL");
	printf("\n3. SALIR");
	printf("\n\nELEGIR OPCION: ");
	scanf("%d",opcion);
	switch(opcion){
		case 1: for(int i=0;i<=5;i++){
			printf("\nEQUIPO %d: ",i);
			scanf("%c",equipo);
			printf("\nJUEGOS JUGADOS: ");
			scanf("%d",jugados);
			printf("\nJUEGOS GANADOS: ");
			scanf("%d",ganados);
			printf("\nJUEGOS PERDIDOS: ");
			scanf("%d",perdidos);
			prom=ganados;
			printf("presione 1 si ya termino de escribir: ");
			scanf("%d",opcionx);
			if(opcionx=1){
				    printf("No.  EQUIPO        J.J   J.G   J.P   PROMEDIO");
				for(int i=0;i<=5;i++){
					printf(" %d    %c          %d    %d    %d    %d      %d",i,equipo,ganados,perdidos,prom);
				}
			}
			break;
			break;
		}
