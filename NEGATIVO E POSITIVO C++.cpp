#include <stdio.h>
#include <locale.h> // palavras em portugues

int main (){
	setlocale (LC_ALL, "Portuguese");
	int a;
	printf("Digite o 1� valor: ");
    scanf("%d", &a);
	
	if (a<0){
		printf ("� negativo", a);}
	else {
		printf("� positivo", a);
	}
	} 
