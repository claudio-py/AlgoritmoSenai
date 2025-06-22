#include <stdio.h>
#include <time.h>
#include <unistd.h> 

int main() {
    int hora, minuto;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("Digite a hora do despertador (HH MM): ");
    scanf("%d %d", &hora, &minuto);
    printf("Otimo, despertador programado para %02d:%02d\n", hora, minuto);

    while (1) {
	t = time(NULL);
	tm = *localtime(&t);

	if (tm.tm_hour == hora && tm.tm_min == minuto) {
	    printf("Despertador tocando! Hora: %02d:%02d\n", tm.tm_hour, tm.tm_min);
	    break;
	}

	sleep(1); // Espera 1 segundo antes de verificar novamente
    }

    return 0;
}
