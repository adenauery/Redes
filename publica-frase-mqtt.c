#include <stdio.h>
#include <string.h>
int main( int argc, char *argv[ ] )
{
	int cont;
        char linha[256];

	for(cont=1; cont < argc; cont++){
                strcat(linha,argv[cont]);
		strcat(linha," ");
	}
        printf("%s\n", linha);
	return 0;
}
