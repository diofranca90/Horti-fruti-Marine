/* Este programa gerar 6 n�meros aleat�ros para MegaSena */

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{  // Defini��o de variaveis
	int num_1, num_2, num_3, num_4, num_5, num_6;
    int num_mega_sena; 
 	int cont;
 	
 	// Tela e sele��o de valores nas variaveis  
 	printf("Selecione seus numeros: \n");
    scanf("%d""%d" "%d" "%d" "%d" "%d", &num_1, &num_2, &num_3, &num_4, &num_5, &num_6);
    
	// Tela          
   	printf("\n Seus numeros s�o: %d, %d, %d, %d, %d, %d", num_1, num_2, num_3, num_4, num_5, num_6);
    
	// Sele��o de numeros aleat�rios  
    srand(time(NULL));
    
    // Tela sele��o de numeros aleat�rios
    printf("\n\n Os numeros para megaSena: \n");
    
    // Estrutura de repeti��o
    for (cont = 1; cont<=6; cont++)
   {   num_mega_sena = 1 + rand()%60 ;  //gera um n�mero aleat�rio de 1 a 60
   
   // Tela
       printf("%d ",num_mega_sena);
   }
   
   // Pular linha
    printf("\n");
       
    system("pause");   
    return 0;
		
}
