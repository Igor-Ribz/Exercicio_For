#include<stdio.h>
#include<locale.h>

//Escreva um algoritmo que receba o nome do aluno e repita, por 5000 vezes
//a frase eu, fulano, vou passar em algoritmo com média 10!
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[30];
	int contador;
	soma = 0;
	
	printf("digite seu nome");
    fgets(nome, 30, stdin);
    fflush(stdin);
    
	//for(inicializar a variável;condição;passo)
	for( int i=1; i<=5000; i++) {	printf("Eu, %s vou passar em algoritmos com média 10!\n",nome, contador);
	}
	
return 0;
}


