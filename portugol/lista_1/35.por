programa {
  funcao inicio() {
    inteiro num1, num2, teste

    escreva ("digite o primeiro numero: ")
    leia(num1)

    escreva("digite o segundo numero: ")
    leia(num2)
    
    teste = num1+num2

    se(teste % 2 == 1){
    escreva("a soma é ímpar")
    }senao{
    escreva("a soma não é ímpar")
    }
  }
}
