#include<stdio.h>
#include<string.h>
main(){
	char Endereco[50];
	char NovoEndereco[50];
	printf("Digite seu endereco: \n");
	gets(Endereco);
	printf("\n");
	
	strcpy(NovoEndereco, Endereco);
	puts(NovoEndereco);
}
