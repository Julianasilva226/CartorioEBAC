#include <stdio.h> // Biblioteca de copmunica��o com o usuario
#include <stdlib.h> // Biblioteca usada para aloca��o de espa�os de memorias ( as variaveis)
#include <locale.h>//  Biblioteca de aloca�ao de texto por regi�o
#include <string.h>// Biblioteca respons�vel pelas strings

int cadastrar()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char email[40];
	char tel[40];
	char ocupacao[40];
	
	printf("Digite o CPF para Cadastro:\n");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings.
	
	FILE *file; // cria o arquivo no banco de dados
	file = fopen(arquivo, "w"); // criando um novo arquivo
	fprintf(file,cpf); // usado para salvar o valor da variavel
	fclose(file); // usado para fechar o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o Nome para Cadastro:\n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o Sobrenome para Cadastro:\n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o E-mail para Cadastro:\n");
	scanf("%s", email);
	
	file = fopen(arquivo, "a");
	fprintf(file,email);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o n�mero de Telefone para Contato:\n");
	scanf("%s", tel);
	
	file = fopen(arquivo, "a");
	fprintf(file,tel);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite a Ocupa��o:\n");
	scanf("%s", ocupacao);
	
	file = fopen(arquivo, "a");
	fprintf(file,ocupacao);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	system("pause");
	
}
int consultar()
{
	setlocale(LC_ALL, "portuguese");
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF para consulta:");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
{
    printf("N�o foi possivel localizar o CPF digitado.\n");
}

while(fgets(conteudo, 200, file) != NULL)
{
	printf("\nEssas s�o as informa��es cadastradas neste CPF.\n");
    printf("%s", conteudo);
    printf("\n\n");
}
    system("pause");
    fclose(file);
}

int deletar()
{

	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser Deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
{
	printf("O usu�rio digitado foi deletado do nosso sistema.\n");
	system("pause");
}
	fclose(file);

}


int main()
 {
    //Definindo vari�veis
   int opcao=0;
   int laco=1;
   
   for(laco=1;laco=1;)
    {

      system("cls");

      //Definindo a linguagem
   	
	  setlocale(LC_ALL, "portuguese");
    
	
	  printf("**** Cart�rio da EBAC ****\n\n");
	
      //Inicio do menu
 	  printf("Escolha a op��o desejada do menu: \n\n");	
	  printf("\t1 - Cadastrar Novo Usu�rio\n");
	  printf("\t2 - Consultar Cadastros\n");
  	  printf("\t3 - Deletar Usu�rios\n\n");
	  printf("\t4 - Encerrar a se��o.\n\n"); 
 	  printf("\n Digite a op��o desejada:");
	  // fim do menu

	  //Armazenando a escolha do usu�rio
 	  scanf("%d", &opcao);
	
	  system("cls");
	 
	  
	  //inicio sa sele��o de escolha
	  switch(opcao)
	
	    {
	     case 1:
		  cadastrar();
		   break;
		 
		 case 2:
		   consultar();
		   break;
		   
		 case 3:
		   deletar();
		   break; 
		 
		 case 4:
		  printf("Obrigado por utilizar o nosso sistema!"); 
		  return 0;
		   break;
		   
		   default:
		   printf("Ha op��o desejada n�o est� disponivel, Retorne ao menu Inicial.");
		   system("pause");
		   break;
	    }
		
		//fim da sele��o de escolha
}
}

