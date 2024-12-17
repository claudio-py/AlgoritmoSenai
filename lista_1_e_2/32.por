programa {
  funcao inicio() {
   real num1, num2
   escreva("digite o primeiro número: ")
   leia(num1)
   escreva("digite o segundo número: ")
   leia(num2)

   se(num1 >= num2){
      escreva(" a diferença é de: ", num1-num2) 
   }senao{
      escreva("a diferença é de: ", num2-num1)
   }
  }
}

