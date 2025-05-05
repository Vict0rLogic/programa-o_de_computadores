#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int num ,tentativaNum, tentativas = 0;
   
   	num =(rand()% 100)+1;
   	printf("o numero secreto é %d\n",num);
   	printf("____________________________________\n");
   	printf("bem vindo ao jogo do numero Secreto\n");
   	
	
	do{
	printf("Digite um numero de 1 a 100 :");
   	scanf("%d",&tentativaNum);
   	tentativas= tentativas ++;
   
  
  	
   	if (tentativaNum == num ){
   		printf("Parabéns!\nVocê acertou o número %d\nCom um total de %d tentativas!\n", num, tentativas);
	   }
		   else if(tentativaNum <num)
		   {
		   	printf("o numero secreto é maior ");
		   }
		   	else{
		   		printf("o numero secreto é menor");
			   }
			   tentativas= tentativas + 1;
	}while(tentativaNum != num);
    return 0;
    
}
