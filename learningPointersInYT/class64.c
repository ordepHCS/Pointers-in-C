// Ponteiros a estruturas(op matematicas)
#include <stdio.h>

int main(void) {
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 80;
	depois->segundo = 50;
	
    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio * depois->hora;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto - depois->segundo;
	
	printf("%d : %d : %d\n", antes.hora, antes.minuto, antes.segundo);

	return 0;
}