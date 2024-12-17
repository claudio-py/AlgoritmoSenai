programa {
  inclua biblioteca Matematica --> Mat
  funcao inicio() {
    real num, resultado
    
    escreva("digite um numero: ")
    leia(num)

    resultado = Mat.raiz(num,3)

    se(resultado % 1 == 0){
      escreva("este numero é o cubo de um número inteiro")
    }senao{
      escreva("não é o cubo de um número inteiro")
    }
  }
}
