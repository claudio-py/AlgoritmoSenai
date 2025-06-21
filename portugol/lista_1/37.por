programa {
  funcao inicio() {
   real num

   escreva("digite um número: ")
   leia(num)
   
    se(num==0){
      escreva("o zero é neutro")
    }senao se(num>0){
      escreva("o numero é positivo")
    }senao{
      escreva("o número é negativo")
    }
  }
}
