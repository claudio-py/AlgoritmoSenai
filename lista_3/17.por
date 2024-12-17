programa {
  funcao inicio() {
    inteiro n
    real h = 0
    real x = 1
    escreva("digihe o valor de N: ")
    leia(n)

   

    para(real i = 1; i<=n; i++){
      x =(1/i)
      h = h + x
      

    }
    escreva("o valor de H é: ", h)

     }
}
