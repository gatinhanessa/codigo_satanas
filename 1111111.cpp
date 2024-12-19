	#include <stdio.h>
	#include <string.h>
	
int main () {

int temperatura;

printf ("-------------SENSOR DE UMIDADE--------------\n");
printf ("----------(1)seco / 15 ate 20 graus---------\n");
printf ("----------(2)umido / 9 ate 15 graus---------\n");
printf ("--------(3)encharcado / 2 ate 9 graus-------\n");
printf ("--------------------------------------------\n");

printf ("\nDigite 10 temperaturas para as plantas\n");

	for(int i = 0; i < 10; i ++){
	printf ("\nTemperatura da planta:\n");
	scanf ("%d",&temperatura);
	}
	
		if(temperatura >= 2 && temperatura <= 4){
		printf("\nSeu solo em relacao ao nivel de umidade e encharcado!!\n");
		printf ("\nATENCAO!!!\n");
		printf ("\nRegar menos a planta!!\n");
		}
	
		if(temperatura > 4 && temperatura <= 5){
		printf("\nSeu solo em relacao ao nivel de umidade e encharcado!!\n");
		printf ("\nATENCAO!!!\n");
		printf ("\nRegar menos a planta!!\n");
		}
	
		if(temperatura > 5 && temperatura <= 7){
		printf("\nSeu solo em relacao ao nivel de umidade e encharcado!!\n");
		printf ("\nATENCAO!!!\n");
		printf ("\nRegar menos a planta!!\n");
		}
	
		if(temperatura > 7 && temperatura <= 9){
		printf("\nSeu solo em relacao ao nivel de umidade e encharcado!!\n");
		printf ("\nATENCAO!!!\n");
		printf ("\nRegar menos a planta!!\n");
		}
	
		if(temperatura > 9 && temperatura <= 10){
		printf("\nSeu solo em relacao ao nivel de umidade e umido!!\n");
		printf ("\nOBSERVACAO!!!\n");
		printf ("\nsua planta esta num estado otimo!!\n");
		}
	
		if(temperatura > 10 && temperatura <= 12){
		printf("\nSeu solo em relacao ao nivel de umidade e umido!!\n");
		printf ("\nOBSERVACAO!!!\n");
		printf ("\nsua planta esta num estado otimo!!\n");
		}
	
		if(temperatura > 12 && temperatura <= 14){
		printf("\nSeu solo em relacao ao nivel de umidade e umido!!\n");
		printf ("\nOBSERVACAO!!!\n");
		printf ("\nsua planta esta num estado otimo!!\n");
		}
	
		if(temperatura > 14 && temperatura <= 15){
		printf("\nSeu solo em relacao ao nivel de umidade e umido!!\n");
		printf ("\nOBSERVACAO!!!\n");
		printf ("\nsua planta esta num estado otimo!!\n");
		}
	
		if(temperatura > 16 && temperatura <= 18){
		printf("\nSeu solo em relacao ao nivel de umidade e seco!!\n");
		printf ("\nATENCAO!!!\n");
		printf ("\nRegar mais a planta!!\n");
		}
		if(temperatura >18 && temperatura <= 20){
		printf("\nSeu solo em relacao ao nivel de umidade e seco!!\n");
		printf ("\nATENCAO!!!\n");
		printf ("\nRegar mais a planta!!\n");
		}
	
		if(temperatura <=1  || temperatura > 20){
		printf ("\nTemperatura irregular\n");
		}






}
