programa {
  funcao inicio() {
    real primeiroTermo, nTermo, razao, resultado

    escreva("digite o primeiro termo da P.G: ")
    leia(primeiroTermo)
    escreva("digite a razão da P.G: ")
    leia(razao)
    escreva("digite qual a posição do termo que você deseja encontrar: ")
    leia(nTermo)
    nTermo = nTermo - 1
    resultado = primeiroTermo

    enquanto(nTermo > 0){
      resultado = resultado * razao
      nTermo--
    }
    escreva(resultado)


  }
}