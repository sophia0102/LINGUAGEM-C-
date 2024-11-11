#include <stdio.h>
#include <locale.h> // palavras em portugues

int main (){
	setlocale (LC_ALL, "Portuguese");
	int a;
	printf("Digite o 1º valor: ");
    scanf("%d", &a);
	
	if (a<0){
		printf ("é negativo", a);}
	else {
		printf("é positivo", a);
	}
	} 
