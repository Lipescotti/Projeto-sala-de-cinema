#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    char cinema[900][3], sair;
    int sala, assento;


//Evitar resto de memoria
    for (int o = 0; o < 3; o++) {
        for (int g = 0; g < 900; g++) {
            cinema[g][o] = '#'; 
        }
    }

//Funcionamento
    do {
    	system("cls");
        do {
            printf("Sala solicitada (1, 2 ou 3): ");
            scanf("%d", &sala);
            if (sala < 1 || sala > 3) {
                printf("ENTRADA INVALIDA\n\n");
            }
            sala = sala - 1; 
        } while (sala < 0 || sala > 2);
		
		
		printf("\n\n\n");
		printf("                                     |___________________________________________|\n\n\n");
		
        for (int f = 0; f < 900; f++) {
            if (cinema[f][sala] == '#') 
			{ 
                printf("%0.3d ", f + 1); 
                
            }
			
			else 
			{
                printf(" X  "); 
            }

            if ((f + 1) % 30 == 0) {
                printf("\n");
            }
        }

        
		do
		{
			printf("\n\nQual acento voc� deseja ?\n");
        	scanf("%d", &assento);
						
			if (assento > 0 && assento <= 900) 
			{
            	if (cinema[assento - 1][sala] == '#') 
				{  
                	cinema[assento - 1][sala] = 'X';  
            	} 
				else 
				{
                printf("Este assento j� est� ocupado.\n");
                assento = -1;
            	}
        	} 
			else
			{
            	printf("Assento inv�lido.\n");
        	}	
		}while(assento < 0 || assento > 900);
       

       do
       {
        printf("\n\nSair ? (s ou n): ");
        scanf(" %c", &sair); 
		
		if(sair != 's' && sair != 'S' && sair != 'N' && sair != 'n')
		{
			printf("\nENTRADA INVALIDA");
		}
	   }while(sair != 's' && sair != 'S' && sair != 'N' && sair != 'n');

		
    } while (sair != 's' && sair != 'S');  

    return 0;
}
