programa {
  funcao inicio() {
    real vetor[10]
    inteiro i = 0
    faca{
      escreva("digite o valor do ",i+1,"º número: " )
      leia(vetor[i])
      vetor[i] = vetor[i]/2
      i++
    }enquanto(i <10)
    i = 0
    faca{
      escreva(vetor[i]," | " )
      i++
    }enquanto(i <10)

  
    
  }
}
