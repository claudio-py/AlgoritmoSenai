programa {
  funcao inicio() {
    real cigarro, anos, resultado

    escreva("digite quantos cigarros por dias :  ")
    leia(cigarro)
     escreva("digite por quantos anos :  ")
    leia(anos)

    resultado = (((cigarro*10)/60)/24)*(365*anos)

    escreva(
      "você ja perdeu ", 
     resultado,
     " dias da sua vida"
    )
  }
}
