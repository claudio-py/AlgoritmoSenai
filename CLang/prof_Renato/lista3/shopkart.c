#include <stdio.h>

int main() {
	int produto, quantidade, acc = 0;
	float preco, total = 0.0;

	printf("Produtos disponiveis:\n");
	printf("1 - Arroz (R$ 2.50)\n");
	printf("2 - Feijao (R$ 3.00)\n");
	printf("3 - Macarrao (R$ 4.00)\n");
	printf("4 - Carne (R$ 5.00)\n");
	printf("5 - Leite (R$ 6.00)\n");
	printf("Digite o codigo do produto: \n"); 
	scanf("%d", &produto);
	printf("Digite a quantidade: \n");
	scanf("%d", &quantidade);

	while (produto != 0) {
		switch (produto) {
			case 1: preco = 2.50; break;
			case 2: preco = 3.00; break;
			case 3: preco = 4.00; break;
			case 4: preco = 5.00; break;
			case 5: preco = 6.00; break;
			default: printf("Codigo invalido!\n"); continue;
		}
		if (quantidade <= 0) {
			printf("Quantidade invalida!\n");
			continue;
		}
		acc += quantidade;
		total += preco * quantidade;
		printf("Produto %d adicionado. Total parcial: R$ %.2f\n", produto, total);
		printf("Digite o codigo do produto: \n"); 
		scanf("%d", &produto);
		if(produto == 0) break;
		printf("Digite a quantidade: \n");
		scanf("%d", &quantidade);
	}

	printf("Total da compra: R$ %.2f\n", total);
	printf("Quantidade total de produtos: %d\n", acc);
	printf("Preco medio: %.2f\n", acc > 0 ? total / acc : 0.0);
	return 0;
}
