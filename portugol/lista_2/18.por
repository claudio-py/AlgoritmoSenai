programa {
  inclua biblioteca Matematica --> Mat
  funcao inicio() {
    inteiro n, resultado, potencia
    resultado = 0
    potencia = 0
    escreva("digite o valor de N: ") 
    leia(n)
     para(inteiro i = 0; i< n; i++){
      potencia = Mat.potencia(i+1,i)
     resultado = resultado + potencia
      escreva(i+1,"^",i," = ",potencia," --> ",i+1,"º termo \n") 
     }
     escreva("valor total da soma: ", resultado)
  }
}


