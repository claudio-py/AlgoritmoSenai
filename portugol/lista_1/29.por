programa {
  funcao inicio() {
    inteiro num1, num2

    escreva("digite o primeiro numero: ")
    leia(num1)
    escreva("digite o segundo numero: ")
    leia(num2)

    se(num1 % 3 == 0 e num2 % 3 == 0){
    escreva("ambos os números são multiplos de 3")
    }senao{
    escreva("êpa, algum número aí não é múltiplo de 3 amigão")
    }
  }
}
