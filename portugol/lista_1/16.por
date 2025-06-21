programa {
  inclua biblioteca Matematica
  funcao inicio() {
	real num1, raiz
escreva("digite um numero: ")
leia(num1)
raiz = Matematica.raiz(num1,2)
se(raiz % 1 == 0){
  
  escreva("o numero é um quadrado perfeito")
}senao{
  escreva("não é um quadrado perfeito")
}

  }
}