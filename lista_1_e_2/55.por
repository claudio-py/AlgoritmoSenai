programa {
  funcao inicio() {
    real km,dias, resultado

    escreva("digite quantos dias o locatário permaneceu com o veículo:  ")
    leia(dias)
    escreva("escreva quantos km o veículo percorreu: ")
    leia(km)
    resultado = (dias*90) + (km*0.2)
    escreva(
      "o valor total que deverá ser pago é: R$", 
     resultado
    )
  }
}
