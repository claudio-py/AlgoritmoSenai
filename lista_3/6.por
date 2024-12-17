programa {
  //questao 6
    inteiro n, a, acumulador
    funcao digiteN(){
      escreva("digite o valor de N: ")
      leia(n)

      se(n <= 0){
        digiteN()
      }
    }

    funcao inicio() {
    acumulador = 0
    
    escreva("digite o valor de A: ")
    leia(a)
    
    digiteN()
    
    enquanto( n > 0 ){
      n--
      acumulador = acumulador + a
      a++
    }
      escreva(acumulador)
  
  }
}

