programa {
  funcao inicio() {
    inteiro num1, num2
    escreva("digite o valor do primeiro numero: ")
    leia(num1)
    escreva("digite o valor ddo segundo numero: ")
    leia(num2)
    se(num1< num2){
      escreva("resultado: ", num1 + num2)
    }senao se(num2< num1){
      escreva("resultado: ", num2 + num1)
    }senao{
      escreva("resultado: ", num1 + num2)
    }
  }
}
