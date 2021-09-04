#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[ ] )
{
	char comando[256];
	sprintf(comando, "mosquitto_pub -h broker.emqx.io -t temp-centro-pelotas -m %s", argv[1]);
	system(comando);
}
