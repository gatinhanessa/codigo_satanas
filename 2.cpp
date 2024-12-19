				#include<stdio.h>
				#include<string.h>
				
				int main() {
				int idade,meses,dias;
				double result,resultado;
				

				 
				printf("Informe sua idade:\n");
				scanf("%d",&idade);
				result=idade*12;
				resultado=idade*365;
				printf ("Anos Vividos: %d\n", idade);
		    	printf ("Meses Vividos:%.0lf\n", result);	
				printf ("Dias Vividos:%.0lf\n",resultado);
					
				}
