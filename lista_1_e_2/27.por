programa {
  funcao inicio() {
    inteiro num, teste

    escreva("escreva um numero: ")
    leia(num)

    teste = num - 1

    se(num%1 == 0 e num > 1){
      enquanto(teste > 1){
        se(num % teste == 0){
          escreva("não é um número primo A")
          teste = 0
          
        }senao{
          teste = teste - 1
    
        }
      }
      se(teste == 0){

      }senao{
        escreva("é um número primo")

      }
  
    }senao{
      escreva("não é um numero primo B")

    }
  }
}
