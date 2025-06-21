programa {
  funcao inicio() {
    real primeiroTermo, nTermo, razao, resultado

    escreva("digite o primeiro termo da P.A: ")
    leia(primeiroTermo)
    escreva("digite a razão da P.A: ")
    leia(razao)
    escreva("digite qual aposição do termo que você deseja encontra: ")
    leia(nTermo)
    nTermo = nTermo - 1
     resultado = primeiroTermo

    enquanto(nTermo > 0){
      resultado = resultado + razao
      nTermo--
    }
    escreva(resultado)


  }
}
