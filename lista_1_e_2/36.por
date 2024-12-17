programa {
  funcao inicio() {
    real num1, num2, num3, teste
    
    escreva(" digite o primeiro número: ")
    leia(num1)
    escreva(" digite o segundo número: ")
    leia(num2)
    escreva(" digite o terceiro número: ")
    leia(num3)

    teste = num1 + num2 + num3

    se(teste > 50){
    escreva("a soma é maior do que 50") 
    }senao{
    escreva("a soma não é maior do que 50")
    }
  }
}

