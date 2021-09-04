#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
char comando[256];
struct tm *data_hora_atual;

	while(1)
	{

	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	sprintf(comando, "mosquitto_pub -h broker.emqx.io -t pi2a/temps -m 'Data e Hora Computador Adenauer: %d:%d:%d'", data_hora_atual->tm_hour, data_hora_atual->tm_min, data_hora_atual->tm_sec);
	system(comando);
	sleep(10);
	}
}
