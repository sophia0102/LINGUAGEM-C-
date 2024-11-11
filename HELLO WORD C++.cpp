#include <stdio.h>
#include <locale.h> // palavras em portugues

int main (){
	setlocale (LC_ALL, "Portuguese");
	printf("Hello World");
	printf("\nEstou Livre da Maldição");
}
