programa {
  funcao inicio() {
    real num1,num2,num3, resultado

    escreva("escreva o primeiro numero: ")
    leia(num1)
    escreva("escreva o primeiro numero: ")
    leia(num2)
    escreva("escreva o primeiro numero: ")
    leia(num3)

    resultado = (num1*num1) + (num2*num2) + (num3*num3)

    se(resultado > 100){
      escreva("a soma dos quadrados é superior a 100")
    }senao{
      escreva("a soma dos quadrados não ultrapassa 100")
    }
  }
}
