programa {
  funcao inicio() {
  inteiro num1, num2
escreva("digite o primeiro numero: ")
leia(num1)
escreva("digite o segundo numero: ")
leia(num2)


se(num1 % num2 == 0){
  escreva(num1 , " é multiplo de ", num2)
}senao se(num2 % num1 == 0){
  escreva(num2 , " é multiplo de ", num1)
}senao{
  escreva("não é multiplo")
}

  }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 330; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */