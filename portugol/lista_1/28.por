programa {
  funcao inicio() {
    inteiro num, teste, resultado
    
    escreva("escreva um numero: ")
    leia(num)

    resultado = 0
    teste = num/2

    se(num % 2 == 0 e num > 5){
    enquanto(teste >= 1 e resultado <= num){
      se(num % teste == 0){
        resultado = resultado + teste
        
        teste = teste -1
      }senao{
      teste = teste -1
      }
    }
      se(resultado == num){
      escreva("é um numero perfeito")
      }senao{
    escreva("não é um número perfeito")
      }
    }senao{
    escreva("não é um número perfeito")
    }
  }
}

