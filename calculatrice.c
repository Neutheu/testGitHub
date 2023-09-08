#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{

	int resultat = 0, nombre1 = 0, nombre2 = 0;

	printf("Entrez le nombre1");
	scanf("%d",&nombre1);
	printf("Entrez le nombre2\n");
	scanf("%d", &nombre2);

	resultat = nombre1 + nombre2;
	printf("%d", resultat);

return 0;

}
