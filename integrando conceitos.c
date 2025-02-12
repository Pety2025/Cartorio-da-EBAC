#include <stdio.h> //bibilioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de esp�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca responsavel por cuidar do string

int registro() // fun��o respons�vel po cadastrar os usuarios no sistema
{
	//inicio da cria��o de variaveis / string
  char arquivo[40];
  char cpf[40];
  char nome[40];
  char sobrenome[40];
  char cargo[40]; 
    //final dacria��o do string
  
  printf("digite o cpf a ser cadastrado: "); //coletando informa��o do usuario
  scanf("%s", cpf); // %s refere-se a instrng
  
  strcpy(arquivo, cpf); //Responsavel por copiar os valores de string
  
  FILE *file; //cria oarquivo
  file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
  fprintf(file,cpf); //salvo o valor da variavel
  fclose(file); // fecho o arquivo
  
  file = fopen(arquivo, "a");
  fprintf(file,",");
  fclose(file);
  
  printf("Digite o nome a ser cadastrado: ");
  scanf("%s",nome);
  
  file = fopen(arquivo, "a");
  fprintf(file,nome);
  fclose(file);
  
  file = fopen(arquivo, "a");
  fprintf(file,",");
  fclose(file);
  
  printf("digite o sobrernome a ser cadastrado: ");
  scanf("%s",sobrenome);
  
  file = fopen(arquivo, "a");
  fprintf(file,sobrenome);
  fclose(file);
  
  file = fopen(arquivo, "a");
  fprintf(file,",");
  fclose(file);
  
  printf("digite o cargo a ser cadastrado: ");
  scanf("%s",cargo);
  
  file = fopen(arquivo, "a");
  fprintf(file,cargo);
  fclose(file);
  
  system("pause");
  
  
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
   char cpf[40];
   char conteudo[200];
   
   printf("digite o CPF a ser consultado: ");
   scanf("%s" ,cpf);
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
   	printf("N�o foi possivel abrir o arquivo, n�o localizado!. \n");
   } 
   
   while(fgets(conteudo, 200, file) !=NULL)
   {
   	  printf("\n Essas s�o as informa��es do usuario: ");
   	  printf("%s", conteudo);
   	  printf("\n\n");
   	  
   }
   system ("pause");
}

int deletar()
{
    char cpf[40];
  
    printf("Digite o CPF do usu�rio a ser DELETADO: ");
    scanf("%s" ,cpf);
  
    remove(cpf);
  
    FILE *file;
    file = fopen(cpf, "r");
  
    if(file == NULL)
  {
  	printf("O usuario n�o se encontra no sistema!. \n");
  	system("pause");
  }
}
    
int main()
{ 
    int opcao=0; //definindo variaveis
    int laco=1;
    
     for(laco=1;laco=1;)
    {
    	
    	system("cls");
    	
    
    
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
	printf("###Cart�rio da EBAC###\n\n"); //inicio do menu
	printf("Escolha a op��o desejada do Menu\n\n");
	printf("\t1 - Registrar Nome\n");
	printf("\t2 - Consultar Nome\n");
	printf("\t3 - Deletar Nome\n\n");
	printf("op��o:");  // fim do menu
	
	scanf("%d" , &opcao); // armazenando a escolha do usuario
	
	system("cls"); //responsavel por limpar a tela
	
	switch (opcao)
	{
		case 1:
			registro(); // chamada de fun��es
			break;
		
		case 2:
			consulta();
		    break;
		
		case 3:
			 deletar();
		     break;
		
		
		default:
		printf("essa op��o n�o est� disponivel!\n");
		system ("pause"); 
		break;
		} // fim da sele��o 


	
	
    }
}




	

	

		
	
