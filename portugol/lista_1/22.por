programa {
  funcao inicio() {
    real num1, num2
    escreva("escreva o primeiro numero: ")
    leia(num1)
    escreva("escreva o segundo numero: ")
    leia(num2)

    se(num1 != num2){
      se(num1 > num2){
        escreva(num1)
      }senao{
        escreva(num2)
      }
    }senao{
      escreva("escreva dois numeros diferentes")
    }
  }
}
 