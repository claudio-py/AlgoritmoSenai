programa {
  inclua biblioteca Matematica --> Mat
  funcao inicio() {
    inteiro num1, num2,menor, mdc, i 
    caracter deNovo
     
    faca{
      limpa()
      i=1

      escreva("Digite o primeiro numero: ")
      leia(num1)

      escreva("Digite o segundo numero: ")
      leia(num2)
    
      menor = Mat.menor_numero(num1,num2)
     

      faca{
        se(num1 % i == 0 e num2 % i == 0){
          mdc = i

        }
        i++
      
      }enquanto(mdc < menor e i <= menor)
        escreva("o maximo divisor comum é: ", mdc,"\n")
        
        escreva("voce deseja outras entradas (S/?): " )
        leia(deNovo)

    }enquanto(deNovo == "s" ou deNovo == "S")


  }
}
