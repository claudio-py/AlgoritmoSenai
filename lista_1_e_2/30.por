programa {
inclua biblioteca Matematica --> Mat
  funcao inicio() {
    real num1, num2, num3, resultado
    
    escreva("escreva o primeiro numero: ")
    leia(num1)
    escreva("escreva o segundo numero: ")
    leia(num2)
    escreva("escreva o terceiro numero: ")
    leia(num3)

    resultado = num1*num2*num3
    resultado = Mat.raiz(resultado, 3)

    escreva(resultado)
  }

}
