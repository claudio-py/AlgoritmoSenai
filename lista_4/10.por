programa {
  funcao inicio() {
    inteiro i = 1
    inteiro j = 0
    inteiro vetor[100]={
      0,0,0,0,0,0,0,0,0,0,
      0,0,0,0,0,0,0,0,0,0,
      0,0,0,0,0,0,0,0,0,0,
      0,0,0,0,0,0,0,0,0,0,
      0,0,0,0,0,0,0,0,0,0
      }

    faca{
      se(i % 2 != 0){
        vetor[j] = i
        j++
      }
      i++
    }enquanto(vetor[49] == 0)

    escreva(vetor)
  }
}
